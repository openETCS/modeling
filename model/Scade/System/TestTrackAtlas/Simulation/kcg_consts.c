/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"

/* TTrackAtlas_Odometry */
const odometry_T_Obu_BasicTypes_Pkg TTrackAtlas_Odometry = { kcg_false, 0, { 0,
    0, 0 }, { 0, 0, 0, 0 }, 0, noMotion_Obu_BasicTypes_Pkg,
  unknownDirection_Obu_BasicTypes_Pkg };

/* TTrackAtlas_fromDriverToMA_R */
const Driver2MAR_T_MA_Request TTrackAtlas_fromDriverToMA_R = { kcg_false,
  kcg_false };

/* TTrackAtlas_TrainProps */
const trainProperties_T_TrainPosition_Types_Pck TTrackAtlas_TrainProps = { 0, 0,
  0, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };

/* TTrackAtlas_packet0 */
const PT0_PositionReport_T_Packet_TrainTypes_Pkg TTrackAtlas_packet0 = {
  kcg_false, { 0, 0, Q_SCALE_10_cm_scale, 0, 0, Q_DIRLRBG_Reverse,
    Q_DLRBG_Reverse, 0, 0, Q_LENGTH_No_train_integrity_information_available, 0,
    0, Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision, M_LEVEL_Level_0, 0 } };

/* TTrackAtlas_packet1 */
const PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg TTrackAtlas_packet1 = {
  kcg_false, { 0, 0, Q_SCALE_10_cm_scale, 0, 0, 0, Q_DIRLRBG_Reverse,
    Q_DLRBG_Reverse, 0, 0, Q_LENGTH_No_train_integrity_information_available, 0,
    0, Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision, M_LEVEL_Level_0, 0 } };

/* TTrackAtlas_P203V1_onboard */
const P203V1_OBU_T_TM_baseline2 TTrackAtlas_P203V1_onboard = { kcg_false, 0,
  Q_DIR_Reverse, Q_SCALE_10_cm_scale, Q_NVGUIPERM_No, Q_NVSBFBPERM_No,
  Q_NVINHSMICPERM_No, 0.0, 0.0, 0.0, 0.0, M_NVEBCL_Confidence_level_50,
  Q_NVKINT_No_integrated_correction_factors_follow, Q_NVKVINTSET_Freight_trains,
  0.0, 0.0, 0, 0.0, 0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
      kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
      kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
      kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
      kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
      kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
      kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 } }, 0, { { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } } }, L_NVKRINT_0m, 0.0, 0, { { kcg_false, L_NVKRINT_0m, 0.0 },
    { kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 } }, 0.0 };

/* TTrackAtlas_PermanentDataP003 */
const P003_permanent_data_T_TM_baseline2 TTrackAtlas_PermanentDataP003 = { 0,
  0 };

/* TTrackAtlas_ModeAndLevel_in */
const T_Mode_Level_Level_And_Mode_Types_Pkg TTrackAtlas_ModeAndLevel_in = {
  kcg_false, M_LEVEL_Level_0, M_MODE_Full_Supervision };

/* cBGHeader */
const BG_Header_T_BG_Types_Pkg cBGHeader = { kcg_false,
  Q_UPDOWN_Down_link_telegram,
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
  Q_MEDIA_Balise, N_TOTAL_1_balise_in_the_group, 0, 0, 0, Q_LINK_Unlinked, {
    kcg_false, 0, { 0, 0, 0 }, { 0, 0, 0, 0 }, 0, noMotion_Obu_BasicTypes_Pkg,
    unknownDirection_Obu_BasicTypes_Pkg }, { 0, 0, 0 }, 0, kcg_false,
  Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse };

/* cRadioMetadata */
const RadioMetadata_T_Common_Types_Pkg cRadioMetadata = { kcg_false, kcg_false,
  kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false, kcg_false };

/* cSendingRBC */
const RBC_Id_T_Common_Types_Pkg cSendingRBC = { kcg_false, 0, 0, 0 };

/* TrainPos0 */
const trainPosition_T_TrainPosition_Types_Pck TrainPos0 = { kcg_false, 0,
  kcg_false, kcg_false, { 0, 0, 0 }, 0, 0, 0, { kcg_false, 0, 0,
    Q_LINK_Unlinked, { 0, 0, 0 }, 0, { kcg_false, 0, 0, { 0, 0, 0 }, { 0, 0,
        0 }, { kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
        0, 0,
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
        Q_LINKREACTION_Train_trip, 0 } }, { kcg_false, { kcg_false,
        Q_UPDOWN_Down_link_telegram,
        M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
        Q_MEDIA_Balise, N_TOTAL_1_balise_in_the_group, 0, 0, 0, Q_LINK_Unlinked,
        { kcg_false, 0, { 0, 0, 0 }, { 0, 0, 0, 0 }, 0,
          noMotion_Obu_BasicTypes_Pkg, unknownDirection_Obu_BasicTypes_Pkg }, {
          0, 0, 0 }, 0, kcg_false, Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse }, { {
          kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 } } } }, { kcg_false, 0, 0,
    Q_LINK_Unlinked, { 0, 0, 0 }, 0, { kcg_false, 0, 0, { 0, 0, 0 }, { 0, 0,
        0 }, { kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
        0, 0,
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
        Q_LINKREACTION_Train_trip, 0 } }, { kcg_false, { kcg_false,
        Q_UPDOWN_Down_link_telegram,
        M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
        Q_MEDIA_Balise, N_TOTAL_1_balise_in_the_group, 0, 0, 0, Q_LINK_Unlinked,
        { kcg_false, 0, { 0, 0, 0 }, { 0, 0, 0, 0 }, 0,
          noMotion_Obu_BasicTypes_Pkg, unknownDirection_Obu_BasicTypes_Pkg }, {
          0, 0, 0 }, 0, kcg_false, Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse }, { {
          kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 } } } }, Q_DLRBG_Reverse,
  Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse, kcg_false };

/* TrainPos4 */
const trainPosition_T_TrainPosition_Types_Pck TrainPos4 = { kcg_true, 0,
  kcg_false, kcg_false, { 0, 0, 0 }, 0, 0, 0, { kcg_false, 426, 364,
    Q_LINK_Linked, { 5044 * 100, 0, 0 }, 4, { kcg_false, 0, 0, { 0, 0, 0 }, { 0,
        0, 0 }, { kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
        0, 0,
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
        Q_LINKREACTION_Train_trip, 0 } }, { kcg_false, { kcg_false,
        Q_UPDOWN_Down_link_telegram,
        M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
        Q_MEDIA_Balise, N_TOTAL_1_balise_in_the_group, 0, 0, 0, Q_LINK_Unlinked,
        { kcg_false, 0, { 0, 0, 0 }, { 0, 0, 0, 0 }, 0,
          noMotion_Obu_BasicTypes_Pkg, unknownDirection_Obu_BasicTypes_Pkg }, {
          0, 0, 0 }, 0, kcg_false, Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse }, { {
          kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 } } } }, { kcg_false, 426, 362,
    Q_LINK_Linked, { 4752 * 100, 0, 0 }, 3, { kcg_false, 0, 0, { 0, 0, 0 }, { 0,
        0, 0 }, { kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
        0, 0,
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
        Q_LINKREACTION_Train_trip, 0 } }, { kcg_false, { kcg_false,
        Q_UPDOWN_Down_link_telegram,
        M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
        Q_MEDIA_Balise, N_TOTAL_1_balise_in_the_group, 0, 0, 0, Q_LINK_Unlinked,
        { kcg_false, 0, { 0, 0, 0 }, { 0, 0, 0, 0 }, 0,
          noMotion_Obu_BasicTypes_Pkg, unknownDirection_Obu_BasicTypes_Pkg }, {
          0, 0, 0 }, 0, kcg_false, Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse }, { {
          kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 } } } }, Q_DLRBG_Reverse,
  Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse, kcg_false };

/* TrainPos3 */
const trainPosition_T_TrainPosition_Types_Pck TrainPos3 = { kcg_true, 0,
  kcg_false, kcg_false, { 0, 0, 0 }, 0, 0, 0, { kcg_false, 426, 362,
    Q_LINK_Linked, { 4752 * 100, 0, 0 }, 3, { kcg_false, 0, 0, { 0, 0, 0 }, { 0,
        0, 0 }, { kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
        0, 0,
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
        Q_LINKREACTION_Train_trip, 0 } }, { kcg_false, { kcg_false,
        Q_UPDOWN_Down_link_telegram,
        M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
        Q_MEDIA_Balise, N_TOTAL_1_balise_in_the_group, 0, 0, 0, Q_LINK_Unlinked,
        { kcg_false, 0, { 0, 0, 0 }, { 0, 0, 0, 0 }, 0,
          noMotion_Obu_BasicTypes_Pkg, unknownDirection_Obu_BasicTypes_Pkg }, {
          0, 0, 0 }, 0, kcg_false, Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse }, { {
          kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 } } } }, { kcg_true, 426, 351,
    Q_LINK_Linked, { 3613 * 100, 0, 0 }, 2, { kcg_false, 0, 0, { 0, 0, 0 }, { 0,
        0, 0 }, { kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
        0, 0,
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
        Q_LINKREACTION_Train_trip, 0 } }, { kcg_false, { kcg_false,
        Q_UPDOWN_Down_link_telegram,
        M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
        Q_MEDIA_Balise, N_TOTAL_1_balise_in_the_group, 0, 0, 0, Q_LINK_Unlinked,
        { kcg_false, 0, { 0, 0, 0 }, { 0, 0, 0, 0 }, 0,
          noMotion_Obu_BasicTypes_Pkg, unknownDirection_Obu_BasicTypes_Pkg }, {
          0, 0, 0 }, 0, kcg_false, Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse }, { {
          kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 } } } }, Q_DLRBG_Reverse,
  Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse, kcg_false };

/* TrainPos2 */
const trainPosition_T_TrainPosition_Types_Pck TrainPos2 = { kcg_false, 0,
  kcg_false, kcg_false, { 0, 0, 0 }, 0, 0, 0, { kcg_true, 426, 351,
    Q_LINK_Linked, { 3613 * 100, 0, 0 }, 2, { kcg_false, 0, 0, { 0, 0, 0 }, { 0,
        0, 0 }, { kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
        0, 0,
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
        Q_LINKREACTION_Train_trip, 0 } }, { kcg_false, { kcg_false,
        Q_UPDOWN_Down_link_telegram,
        M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
        Q_MEDIA_Balise, N_TOTAL_1_balise_in_the_group, 0, 0, 0, Q_LINK_Unlinked,
        { kcg_false, 0, { 0, 0, 0 }, { 0, 0, 0, 0 }, 0,
          noMotion_Obu_BasicTypes_Pkg, unknownDirection_Obu_BasicTypes_Pkg }, {
          0, 0, 0 }, 0, kcg_false, Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse }, { {
          kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 } } } }, { kcg_true, 426, 354,
    Q_LINK_Linked, { 2801 * 100, 0, 0 }, 2, { kcg_false, 0, 0, { 0, 0, 0 }, { 0,
        0, 0 }, { kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
        0, 0,
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
        Q_LINKREACTION_Train_trip, 0 } }, { kcg_false, { kcg_false,
        Q_UPDOWN_Down_link_telegram,
        M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
        Q_MEDIA_Balise, N_TOTAL_1_balise_in_the_group, 0, 0, 0, Q_LINK_Unlinked,
        { kcg_false, 0, { 0, 0, 0 }, { 0, 0, 0, 0 }, 0,
          noMotion_Obu_BasicTypes_Pkg, unknownDirection_Obu_BasicTypes_Pkg }, {
          0, 0, 0 }, 0, kcg_false, Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse }, { {
          kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 } } } }, Q_DLRBG_Reverse,
  Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse, kcg_false };

/* TrainPos1 */
const trainPosition_T_TrainPosition_Types_Pck TrainPos1 = { kcg_true, 0,
  kcg_false, kcg_false, { 0, 0, 0 }, 0, 0, 0, { kcg_true, 426, 354,
    Q_LINK_Unlinked, { 2801 * 100, 0, 0 }, 1, { kcg_false, 0, 0, { 0, 0, 0 }, {
        0, 0, 0 }, { kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
        0, 0,
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
        Q_LINKREACTION_Train_trip, 0 } }, { kcg_false, { kcg_false,
        Q_UPDOWN_Down_link_telegram,
        M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
        Q_MEDIA_Balise, N_TOTAL_1_balise_in_the_group, 0, 0, 0, Q_LINK_Unlinked,
        { kcg_false, 0, { 0, 0, 0 }, { 0, 0, 0, 0 }, 0,
          noMotion_Obu_BasicTypes_Pkg, unknownDirection_Obu_BasicTypes_Pkg }, {
          0, 0, 0 }, 0, kcg_false, Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse }, { {
          kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 } } } }, { kcg_false, 0, 0,
    Q_LINK_Unlinked, { 0, 0, 0 }, 0, { kcg_false, 0, 0, { 0, 0, 0 }, { 0, 0,
        0 }, { kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
        0, 0,
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
        Q_LINKREACTION_Train_trip, 0 } }, { kcg_false, { kcg_false,
        Q_UPDOWN_Down_link_telegram,
        M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS,
        Q_MEDIA_Balise, N_TOTAL_1_balise_in_the_group, 0, 0, 0, Q_LINK_Unlinked,
        { kcg_false, 0, { 0, 0, 0 }, { 0, 0, 0, 0 }, 0,
          noMotion_Obu_BasicTypes_Pkg, unknownDirection_Obu_BasicTypes_Pkg }, {
          0, 0, 0 }, 0, kcg_false, Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse }, { {
          kcg_false, 0, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 }, { kcg_false, 0, Q_DIR_Reverse,
          Q_SCALE_10_cm_scale, 0,
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows,
          0, 0,
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction,
          Q_LINKREACTION_Train_trip, 0 } } } }, Q_DLRBG_Reverse,
  Q_DIRLRBG_Reverse, Q_DIRTRAIN_Reverse, kcg_false };

/* TrackAtlasTypes::DEFAULT_Endtimer */
const Endtimer_t_TrackAtlasTypes DEFAULT_Endtimer_TrackAtlasTypes = { 0, 0 };

/* TrackAtlasTypes::DEFAULT_MA_sectionlist */
const MovementAuthoritySectionlist_t_TrackAtlasTypes DEFAULT_MA_sectionlist_TrackAtlasTypes = {
  { kcg_false, kcg_false, 0, kcg_false, 0, 0 }, { kcg_false, kcg_false, 0,
    kcg_false, 0, 0 }, { kcg_false, kcg_false, 0, kcg_false, 0, 0 }, {
    kcg_false, kcg_false, 0, kcg_false, 0, 0 }, { kcg_false, kcg_false, 0,
    kcg_false, 0, 0 }, { kcg_false, kcg_false, 0, kcg_false, 0, 0 }, {
    kcg_false, kcg_false, 0, kcg_false, 0, 0 }, { kcg_false, kcg_false, 0,
    kcg_false, 0, 0 }, { kcg_false, kcg_false, 0, kcg_false, 0, 0 }, {
    kcg_false, kcg_false, 0, kcg_false, 0, 0 } };

/* TA_MA::INIT_P15_OBU */
const P015_OBU_T_TM INIT_P15_OBU_TA_MA = { kcg_false, Q_DIR_Reverse,
  Q_SCALE_10_cm_scale, 0, 0, 0, { { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 }, { kcg_false, 0,
      Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 } }, 0,
  Q_SECTIONTIMER_No_Section_Timer_information, 0, 0,
  Q_ENDTIMER_No_End_section_timer_information, 0, 0,
  Q_DANGERPOINT_No_danger_point_information, 0, 0,
  Q_OVERLAP_No_overlap_information, 0, 0, 0, 0 };

/* TA_MRSP::DEFAULT_MRSP_Profile */
const MRSP_Profile_t_TrackAtlasTypes DEFAULT_MRSP_Profile_TA_MRSP = { {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 } };

/* TA_MRSP::XSSPold */
const SSP_cat_t_TA_MRSP XSSPold_TA_MRSP = { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
    0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
    0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
    0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
    0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } };

/* TA_MRSP::DEFAULT_MRSP_section */
const MRSP_section_t_TrackAtlasTypes DEFAULT_MRSP_section_TA_MRSP = { kcg_false,
  0, 0, 0 };

/* TA_MRSP::DEFAULT_SSP_targets */
const SSP_t_list_t_TA_MRSP DEFAULT_SSP_targets_TA_MRSP = { { 0, 0, 0 }, { 0, 0,
    0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0,
    0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, {
    0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
  { 0, 0, 0 }, { 0, 0, 0 } };

/* TA_MRSP::DEFAULT_indexed_target */
const SSP_t_indexed_matrix_element_TA_MRSP DEFAULT_indexed_target_TA_MRSP = {
  99, 99, 0 };

/* TA_MRSP::DEFAULT_relevant_target */
const SSP_relevant_target_t_TA_MRSP DEFAULT_relevant_target_TA_MRSP = { 0, 0 };

/* TA_MRSP::DEFAULT_SSP_section */
const SSP_section_t_TA_MRSP DEFAULT_SSP_section_TA_MRSP = { 0, 0 };

/* TA_MRSP::DEFAULT_SSP_Init_ValidSSPsection */
const SSP_Mark_ValidSSPsection_TA_MRSP DEFAULT_SSP_Init_ValidSSPsection_TA_MRSP = {
  kcg_false, 0 };

/* TA_MRSP::SP_NTC */
const SSP_cat_t_TA_MRSP SP_NTC_TA_MRSP = { { 0, 140 }, { 3200000, 0 }, { 0, 0 },
  { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
    0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
    0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
    0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } };

/* TA_MRSP::TOP_SSP_cat */
const SSP_cat_t_TA_MRSP TOP_SSP_cat_TA_MRSP = { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
    0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
    0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
    0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
    0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } };

/* TM_baseline2::DEFAULT_P027v1_OBU_section */
const P027V1_section_enum_T_TM_baseline2 DEFAULT_P027v1_OBU_section_TM_baseline2 = {
  kcg_false, 0, 0,
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, 0, { {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 } } };

/* TA_SSP::DEFAULT_SSP_section */
const StaticSpeedSection_t_TrackAtlasTypes DEFAULT_SSP_section_TA_SSP = {
  kcg_false, 0, 0, kcg_false, 0 };

/* TrackAtlasTypes::DEFAULT_StaticSpeedProfile */
const StaticSpeedProfile_t_TrackAtlasTypes DEFAULT_StaticSpeedProfile_TrackAtlasTypes = {
  { kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 }, {
    kcg_false, 0, 0, kcg_false, 0 }, { kcg_false, 0, 0, kcg_false, 0 } };

/* TM_baseline2::DEFAULT_P003V1_OBU_section */
const P003V1_section_enum_T_TM_baseline2 DEFAULT_P003V1_OBU_section_TM_baseline2 = {
  kcg_false, 0 };

/* TA_Storage::INIT_P3V1 */
const P003V1_OBU_T_TM_baseline2 INIT_P3V1_TA_Storage = { kcg_false,
  Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, 0, { { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 } }, 0, 0, 0, 0, 0, 0,
  Q_NVSBTSMPERM_No, Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill, 0,
  0, 0, 0, 0, M_NVCONTACT_Train_trip, 0, M_NVDERUN_No, 0,
  Q_NVDRIVER_ADHES_Not_allowed };

/* TA_Export::Default_P80_legacy */
const P80_ModeProfiles_T_Packet_Types_Pkg Default_P80_legacy_TA_Export = { {
    kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, M_MAMODE_On_Sight, 0, 0,
    0, Q_MAMODE_as_the_EOA }, { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale,
    0, M_MAMODE_On_Sight, 0, 0, 0, Q_MAMODE_as_the_EOA }, { kcg_false,
    Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, M_MAMODE_On_Sight, 0, 0, 0,
    Q_MAMODE_as_the_EOA } };

/* TM::DEFAULT_P138_legacy */
const P138_ReversingAreaInformation_T_Packet_Types_Pkg DEFAULT_P138_legacy_TM = {
  kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, 0 };

/* TM::DEFAULT_P139_legacy */
const P139_ReversingSupervisionInformation_T_Packet_Types_Pkg DEFAULT_P139_legacy_TM = {
  kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, 0 };

/* TM_specific::DEFAULT_P015_legacy */
const P15_Level23MovementAuthorities_T_Packet_Types_Pkg DEFAULT_P015_legacy_TM_specific = {
  { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, 0, 0,
    Q_SECTIONTIMER_No_Section_Timer_information, 0, 0, 0,
    Q_SECTIONTIMER_No_Section_Timer_information, 0, 0,
    Q_ENDTIMER_No_End_section_timer_information, 0, 0,
    Q_DANGERPOINT_No_danger_point_information, 0, 0,
    Q_OVERLAP_No_overlap_information, 0, 0, 0, 0 }, { kcg_false, Q_DIR_Reverse,
    Q_SCALE_10_cm_scale, 0, 0, 0, Q_SECTIONTIMER_No_Section_Timer_information,
    0, 0, 0, Q_SECTIONTIMER_No_Section_Timer_information, 0, 0,
    Q_ENDTIMER_No_End_section_timer_information, 0, 0,
    Q_DANGERPOINT_No_danger_point_information, 0, 0,
    Q_OVERLAP_No_overlap_information, 0, 0, 0, 0 }, { kcg_false, Q_DIR_Reverse,
    Q_SCALE_10_cm_scale, 0, 0, 0, Q_SECTIONTIMER_No_Section_Timer_information,
    0, 0, 0, Q_SECTIONTIMER_No_Section_Timer_information, 0, 0,
    Q_ENDTIMER_No_End_section_timer_information, 0, 0,
    Q_DANGERPOINT_No_danger_point_information, 0, 0,
    Q_OVERLAP_No_overlap_information, 0, 0, 0, 0 }, { kcg_false, Q_DIR_Reverse,
    Q_SCALE_10_cm_scale, 0, 0, 0, Q_SECTIONTIMER_No_Section_Timer_information,
    0, 0, 0, Q_SECTIONTIMER_No_Section_Timer_information, 0, 0,
    Q_ENDTIMER_No_End_section_timer_information, 0, 0,
    Q_DANGERPOINT_No_danger_point_information, 0, 0,
    Q_OVERLAP_No_overlap_information, 0, 0, 0, 0 }, { kcg_false, Q_DIR_Reverse,
    Q_SCALE_10_cm_scale, 0, 0, 0, Q_SECTIONTIMER_No_Section_Timer_information,
    0, 0, 0, Q_SECTIONTIMER_No_Section_Timer_information, 0, 0,
    Q_ENDTIMER_No_End_section_timer_information, 0, 0,
    Q_DANGERPOINT_No_danger_point_information, 0, 0,
    Q_OVERLAP_No_overlap_information, 0, 0, 0, 0 } };

/* TM_specific::DEFAULT_P021_legacy */
const P21_GradientProfiles_T_Packet_Types_Pkg DEFAULT_P021_legacy_TM_specific = {
  { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill, 0 }, {
    kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill, 0 }, {
    kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill, 0 }, {
    kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill, 0 }, {
    kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill, 0 }, {
    kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill, 0 }, {
    kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill, 0 } };

/* TM_baseline2::DEFAULT_P027V1_section_enum */
const P027V1_section_enum_T_TM_baseline2 DEFAULT_P027V1_section_enum_TM_baseline2 = {
  kcg_false, 0, 0,
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, 0, { {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, {
      kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false, 0, 0 }, { kcg_false,
      0, 0 } } };

/* TM_baseline2::DEFAULT_P027v1_OBU_section_qdiff */
const P027V1_section_enum_qdiff_T_TM_baseline2 DEFAULT_P027v1_OBU_section_qdiff_TM_baseline2 = {
  kcg_false, 0, 0 };

/* TM_baseline2::DEFAULT_P027V1_legacy */
const P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg DEFAULT_P027V1_legacy_TM_baseline2 = {
  kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, 0,
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, { {
      kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
      kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
      kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
      kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
      kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
      kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
      kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 } }, { {
      kcg_false, 0, 0,
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, { {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
          0 } } }, { kcg_false, 0, 0,
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, { {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
          0 } } }, { kcg_false, 0, 0,
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, { {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
          0 } } }, { kcg_false, 0, 0,
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, { {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
          0 } } }, { kcg_false, 0, 0,
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, { {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
          0 } } }, { kcg_false, 0, 0,
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, { {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
          0 } } }, { kcg_false, 0, 0,
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, { {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
          0 } } } } };

/* TM_lib_internal::DEFAULT_P041_OBU_section */
const P041_section_enum_T_TM DEFAULT_P041_OBU_section_TM_lib_internal = {
  kcg_false, M_LEVELTR_Level_0, 0, 0 };

/* TM::DEFAULT_P041_OBU_section */
const P041_section_enum_T_TM DEFAULT_P041_OBU_section_TM = { kcg_false,
  M_LEVELTR_Level_0, 0, 0 };

/* TM_specific::DEFAULT_P041_legacy */
const P41_LevelTransistionOrders_T_Packet_Types_Pkg DEFAULT_P041_legacy_TM_specific = {
  { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, M_LEVELTR_Level_0, 0, 0 },
  { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, M_LEVELTR_Level_0, 0, 0 },
  { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, M_LEVELTR_Level_0, 0, 0 },
  { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, M_LEVELTR_Level_0, 0, 0 },
  { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, M_LEVELTR_Level_0, 0, 0 },
  { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, M_LEVELTR_Level_0, 0, 0 },
  { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, M_LEVELTR_Level_0, 0,
    0 } };

/* TM::DEFAULT_P046_OBU_section */
const P046_section_enum_T_TM DEFAULT_P046_OBU_section_TM = { kcg_false,
  M_LEVELTR_Level_0, 0 };

/* TM_specific::DEFAULT_P046_legacy */
const P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg DEFAULT_P046_legacy_TM_specific = {
  { kcg_false, Q_DIR_Reverse, M_LEVELTR_Level_0, 0 }, { kcg_false,
    Q_DIR_Reverse, M_LEVELTR_Level_0, 0 }, { kcg_false, Q_DIR_Reverse,
    M_LEVELTR_Level_0, 0 }, { kcg_false, Q_DIR_Reverse, M_LEVELTR_Level_0, 0 },
  { kcg_false, Q_DIR_Reverse, M_LEVELTR_Level_0, 0 }, { kcg_false,
    Q_DIR_Reverse, M_LEVELTR_Level_0, 0 }, { kcg_false, Q_DIR_Reverse,
    M_LEVELTR_Level_0, 0 } };

/* TrackAtlasTypes::DEFAULT_StaticSpeedSection */
const StaticSpeedSection_t_TrackAtlasTypes DEFAULT_StaticSpeedSection_TrackAtlasTypes = {
  kcg_false, 0, 0, kcg_false, 0 };

/* MA_Request::cPacket132 */
const Radio_TrainTrack_Message_T_Radio_Types_Pkg cPacket132_MA_Request = {
  kcg_false, { kcg_false, 0, 0.0, 0, Q_MARQSTREASON_Start_selected_by_driver,
    0.0, 0,
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA, 0 },
  { { kcg_false, { 0, 0, Q_SCALE_10_cm_scale, 0, 0, Q_DIRLRBG_Reverse,
        Q_DLRBG_Reverse, 0, 0,
        Q_LENGTH_No_train_integrity_information_available, 0, 0,
        Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision, M_LEVEL_Level_0, 0 } }, {
      kcg_false, { 0, 0, Q_SCALE_10_cm_scale, 0, 0, 0, Q_DIRLRBG_Reverse,
        Q_DLRBG_Reverse, 0, 0,
        Q_LENGTH_No_train_integrity_information_available, 0, 0,
        Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision, M_LEVEL_Level_0, 0 } }, {
      kcg_false, 0, { { kcg_false, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0 } } } }, { kcg_false,
      M_ERROR_Balise_group_linking_consistency_error }, { kcg_false, 0 }, {
      kcg_false, 0 }, { kcg_false, NC_CDTRAIN_Cant_Deficiency_80_mm,
      NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category,
      0, 0,
      M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles,
      M_AXLELOADCAT_A, M_AIRTIGHT_Not_fitted, 0, 0, { {
          M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0 }, {
          M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0 }, {
          M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0 } }, 0, { 0, 0,
        0 } } } };

/* TM::DEFAULT_P015_OBU_section */
const P015_section_enum_T_TM DEFAULT_P015_OBU_section_TM = { kcg_false, 0,
  Q_SECTIONTIMER_No_Section_Timer_information, 0, 0 };

/* MA_Request::cMA_RequestParam */
const P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg cMA_RequestParam_MA_Request = {
  kcg_false, Q_DIR_Reverse, 0, 0, 0 };

/* TA_EmergencyStop::cMSG147_NONE */
const Radio_TrainTrack_Message_T_Radio_Types_Pkg cMSG147_NONE_TA_EmergencyStop = {
  kcg_false, { kcg_false, 0, 0.0, 0, Q_MARQSTREASON_Start_selected_by_driver,
    0.0, 0,
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA, 0 },
  { { kcg_false, { 0, 0, Q_SCALE_10_cm_scale, 0, 0, Q_DIRLRBG_Reverse,
        Q_DLRBG_Reverse, 0, 0,
        Q_LENGTH_No_train_integrity_information_available, 0, 0,
        Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision, M_LEVEL_Level_0, 0 } }, {
      kcg_false, { 0, 0, Q_SCALE_10_cm_scale, 0, 0, 0, Q_DIRLRBG_Reverse,
        Q_DLRBG_Reverse, 0, 0,
        Q_LENGTH_No_train_integrity_information_available, 0, 0,
        Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision, M_LEVEL_Level_0, 0 } }, {
      kcg_false, 0, { { kcg_false, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0 } } } }, { kcg_false,
      M_ERROR_Balise_group_linking_consistency_error }, { kcg_false, 0 }, {
      kcg_false, 0 }, { kcg_false, NC_CDTRAIN_Cant_Deficiency_80_mm,
      NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category,
      0, 0,
      M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles,
      M_AXLELOADCAT_A, M_AIRTIGHT_Not_fitted, 0, 0, { {
          M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0 }, {
          M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0 }, {
          M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0 } }, 0, { 0, 0,
        0 } } } };

/* MA_Request::cPT11_ValidateTrainData */
const PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg cPT11_ValidateTrainData_MA_Request = {
  kcg_false, NC_CDTRAIN_Cant_Deficiency_80_mm,
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category,
  0, 0,
  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles,
  M_AXLELOADCAT_A, M_AIRTIGHT_Not_fitted, 0, 0, { {
      M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0 }, {
      M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0 }, {
      M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0 } }, 0, { 0, 0,
    0 } };

/* MA_Request::cPT3_OBUTelephoneNumber */
const PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg cPT3_OBUTelephoneNumber_MA_Request = {
  kcg_false, 0, { { kcg_false, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0 } } } };

/* MA_Request::cPT4_ErrorReporting */
const PT4_ErrorReporting_T_Packet_TrainTypes_Pkg cPT4_ErrorReporting_MA_Request = {
  kcg_false, M_ERROR_Balise_group_linking_consistency_error };

/* MA_Request::cPT5_TrainRunningNumber */
const PT5_TrainRunningNumber_Packet_TrainTypes_Pkg cPT5_TrainRunningNumber_MA_Request = {
  kcg_false, 0 };

/* MA_Request::cPT9_Level23 */
const PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg cPT9_Level23_MA_Request = {
  kcg_false, 0 };

/* TA_EmergencyStop::NID_EM_Store::cNID_EM_STORE_EMPTY */
const NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store cNID_EM_STORE_EMPTY_TA_EmergencyStop_NID_EM_Store = {
  8, { { 0, kcg_false }, { 0, kcg_false }, { 0, kcg_false }, { 0, kcg_false }, {
      0, kcg_false }, { 0, kcg_false }, { 0, kcg_false }, { 0, kcg_false } } };

/* TM::DEFAULT_CompressedPackets */
const CompressedPacketData_T_Common_Types_Pkg DEFAULT_CompressedPackets_TM = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0 };

/* TM::DEFAULT_PHeader */
const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader_TM = { 0,
  Q_DIR_Reverse, kcg_false, 0, 0 };

/* TM::DEFAULT_P021_OBU_section */
const P021_section_enum_T_TM DEFAULT_P021_OBU_section_TM = { kcg_false, 0,
  Q_GDIR_downhill, 0 };

/* TrackAtlasTypes::DEFAULT_GradientSection */
const Gradient_section_t_TrackAtlasTypes DEFAULT_GradientSection_TrackAtlasTypes = {
  kcg_false, 0, 0, 0, 0 };

/* TrackAtlasTypes::DEFAULT_GradientProfile */
const GradientProfile_t_TrackAtlasTypes DEFAULT_GradientProfile_TrackAtlasTypes = {
  { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0,
    0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0,
    0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, {
    kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0,
    0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0,
    0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, {
    kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0,
    0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0,
    0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, {
    kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0,
    0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0,
    0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, {
    kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0,
    0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0,
    0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, {
    kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0,
    0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0,
    0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, {
    kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 } };

/* TA_Gradient::DEFAULT_GP_Section */
const Gradient_section_t_TrackAtlasTypes DEFAULT_GP_Section_TA_Gradient = {
  kcg_false, 0, 0, 0, 0 };

/* TrackAtlasTypes::DEFAULT_to_Supervision_NTC */
const MRSP_Profile_t_TrackAtlasTypes DEFAULT_to_Supervision_NTC_TrackAtlasTypes = {
  { kcg_true, 0, 0, 140 }, { kcg_true, 32000 * 100, 32000 * 100, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
    kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 } };

/* TrackAtlasTypes::DEFAULT_P003 */
const P003_OBU_T_TM DEFAULT_P003_TrackAtlasTypes = { kcg_false, 0,
  Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, 0, 0, { { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false, 0 }, { kcg_false,
      0 }, { kcg_false, 0 }, { kcg_false, 0 } }, 0, 0, 0, 0, 0, 0, 0,
  Q_NVSBTSMPERM_No, Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill,
  Q_NVGUIPERM_No, Q_NVSBFBPERM_No, Q_NVINHSMICPERM_No, 0, 0, 0, 0, 0,
  M_NVCONTACT_Train_trip, 0, M_NVDERUN_No, 0, Q_NVDRIVER_ADHES_Not_allowed, 0.0,
  0.0, 0.0, 0, 0.0, M_NVEBCL_Confidence_level_50,
  Q_NVKINT_No_integrated_correction_factors_follow, Q_NVKVINTSET_Freight_trains,
  0.0, 0.0, 0, 0.0, 0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
      kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
      kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
      kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
      kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
      kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
      kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
      0.0 } }, 0, { { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } }, { kcg_false, Q_NVKVINTSET_Freight_trains, 0.0, 0.0, 0, 0.0,
      0.0, 0, { { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, {
          kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0,
          0.0, 0.0 }, { kcg_false, 0, 0.0, 0.0 }, { kcg_false, 0, 0.0,
          0.0 } } } }, L_NVKRINT_0m, 0.0, 0, { { kcg_false, L_NVKRINT_0m, 0.0 },
    { kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 }, { kcg_false, L_NVKRINT_0m, 0.0 }, {
      kcg_false, L_NVKRINT_0m, 0.0 } }, 0.0 };

/* TrackAtlasTypes::DEFAULT_to_Mode_and_Level */
const DataForModeAndLevel_t_TrackAtlasTypes DEFAULT_to_Mode_and_Level_TrackAtlasTypes = {
  { kcg_false, kcg_false, { kcg_false, Q_DIR_Reverse,
      Q_SRSTOP_Stop_if_in_SR_mode }, { kcg_false, Q_DIR_Reverse,
      Q_SCALE_10_cm_scale, 0, 0 }, { kcg_false, Q_DIR_Reverse,
      Q_SCALE_10_cm_scale, 0, 0 }, { { kcg_false, Q_DIR_Reverse,
        Q_SCALE_10_cm_scale, 0, 0, 0,
        Q_SECTIONTIMER_No_Section_Timer_information, 0, 0, 0,
        Q_SECTIONTIMER_No_Section_Timer_information, 0, 0,
        Q_ENDTIMER_No_End_section_timer_information, 0, 0,
        Q_DANGERPOINT_No_danger_point_information, 0, 0,
        Q_OVERLAP_No_overlap_information, 0, 0, 0, 0 }, { kcg_false,
        Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, 0, 0,
        Q_SECTIONTIMER_No_Section_Timer_information, 0, 0, 0,
        Q_SECTIONTIMER_No_Section_Timer_information, 0, 0,
        Q_ENDTIMER_No_End_section_timer_information, 0, 0,
        Q_DANGERPOINT_No_danger_point_information, 0, 0,
        Q_OVERLAP_No_overlap_information, 0, 0, 0, 0 }, { kcg_false,
        Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, 0, 0,
        Q_SECTIONTIMER_No_Section_Timer_information, 0, 0, 0,
        Q_SECTIONTIMER_No_Section_Timer_information, 0, 0,
        Q_ENDTIMER_No_End_section_timer_information, 0, 0,
        Q_DANGERPOINT_No_danger_point_information, 0, 0,
        Q_OVERLAP_No_overlap_information, 0, 0, 0, 0 }, { kcg_false,
        Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, 0, 0,
        Q_SECTIONTIMER_No_Section_Timer_information, 0, 0, 0,
        Q_SECTIONTIMER_No_Section_Timer_information, 0, 0,
        Q_ENDTIMER_No_End_section_timer_information, 0, 0,
        Q_DANGERPOINT_No_danger_point_information, 0, 0,
        Q_OVERLAP_No_overlap_information, 0, 0, 0, 0 }, { kcg_false,
        Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, 0, 0,
        Q_SECTIONTIMER_No_Section_Timer_information, 0, 0, 0,
        Q_SECTIONTIMER_No_Section_Timer_information, 0, 0,
        Q_ENDTIMER_No_End_section_timer_information, 0, 0,
        Q_DANGERPOINT_No_danger_point_information, 0, 0,
        Q_OVERLAP_No_overlap_information, 0, 0, 0, 0 } }, { { kcg_false,
        Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill, 0 }, {
        kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill, 0 },
      { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill, 0 },
      { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill, 0 },
      { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill, 0 },
      { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill, 0 },
      { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, Q_GDIR_downhill,
        0 } }, { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, 0,
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, { {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 }, {
          kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
          NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0, 0 } },
      { { kcg_false, 0, 0,
          Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, {
            { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 } } }, { kcg_false, 0, 0,
          Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, {
            { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 } } }, { kcg_false, 0, 0,
          Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, {
            { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 } } }, { kcg_false, 0, 0,
          Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, {
            { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 } } }, { kcg_false, 0, 0,
          Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, {
            { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 } } }, { kcg_false, 0, 0,
          Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, {
            { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 } } }, { kcg_false, 0, 0,
          Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element, {
            { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 }, { kcg_false, Q_DIFF_Cant_Deficiency_specific_category,
              NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm, 0,
              0 } } } } }, { { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
        M_LEVELTR_Level_0, 0, 0 }, { kcg_false, Q_DIR_Reverse,
        Q_SCALE_10_cm_scale, 0, M_LEVELTR_Level_0, 0, 0 }, { kcg_false,
        Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, M_LEVELTR_Level_0, 0, 0 }, {
        kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, M_LEVELTR_Level_0, 0,
        0 }, { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0,
        M_LEVELTR_Level_0, 0, 0 }, { kcg_false, Q_DIR_Reverse,
        Q_SCALE_10_cm_scale, 0, M_LEVELTR_Level_0, 0, 0 }, { kcg_false,
        Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, M_LEVELTR_Level_0, 0, 0 } }, { {
        kcg_false, Q_DIR_Reverse, M_LEVELTR_Level_0, 0 }, { kcg_false,
        Q_DIR_Reverse, M_LEVELTR_Level_0, 0 }, { kcg_false, Q_DIR_Reverse,
        M_LEVELTR_Level_0, 0 }, { kcg_false, Q_DIR_Reverse, M_LEVELTR_Level_0,
        0 }, { kcg_false, Q_DIR_Reverse, M_LEVELTR_Level_0, 0 }, { kcg_false,
        Q_DIR_Reverse, M_LEVELTR_Level_0, 0 }, { kcg_false, Q_DIR_Reverse,
        M_LEVELTR_Level_0, 0 } }, kcg_false, { { kcg_false, Q_DIR_Reverse,
        Q_SCALE_10_cm_scale, 0, M_MAMODE_On_Sight, 0, 0, 0,
        Q_MAMODE_as_the_EOA }, { kcg_false, Q_DIR_Reverse, Q_SCALE_10_cm_scale,
        0, M_MAMODE_On_Sight, 0, 0, 0, Q_MAMODE_as_the_EOA }, { kcg_false,
        Q_DIR_Reverse, Q_SCALE_10_cm_scale, 0, M_MAMODE_On_Sight, 0, 0, 0,
        Q_MAMODE_as_the_EOA } } }, { kcg_false, kcg_false, kcg_false, kcg_false,
    kcg_false, kcg_false, kcg_false }, kcg_false, kcg_false, kcg_false,
  kcg_false };

/* TrackAtlasTypes::DEFAULT_to_DMI */
const DataForDMI_t_TrackAtlasTypes DEFAULT_to_DMI_TrackAtlasTypes = { { {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, {
      kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 } }, kcg_false, { { kcg_false,
      0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0,
      0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 } }, kcg_false };

/* TrackAtlasTypes::DEFAULT_MovementAuthority */
const MovementAuthority_t_TrackAtlasTypes DEFAULT_MovementAuthority_TrackAtlasTypes = {
  kcg_false, MA_L1_TrackAtlasTypes, Q_DIR_Reverse, 0, 0, kcg_false, 0, 0, { {
      kcg_false, kcg_false, 0, kcg_false, 0, 0 }, { kcg_false, kcg_false, 0,
      kcg_false, 0, 0 }, { kcg_false, kcg_false, 0, kcg_false, 0, 0 }, {
      kcg_false, kcg_false, 0, kcg_false, 0, 0 }, { kcg_false, kcg_false, 0,
      kcg_false, 0, 0 }, { kcg_false, kcg_false, 0, kcg_false, 0, 0 }, {
      kcg_false, kcg_false, 0, kcg_false, 0, 0 }, { kcg_false, kcg_false, 0,
      kcg_false, 0, 0 }, { kcg_false, kcg_false, 0, kcg_false, 0, 0 }, {
      kcg_false, kcg_false, 0, kcg_false, 0, 0 } }, kcg_false, { 0, 0,
    kcg_false }, kcg_false, { 0, 0, kcg_false }, kcg_false, { 0, 0 } };

/* TrackAtlasTypes::DEFAULT_TrainTrack */
const Radio_TrainTrack_Message_T_Radio_Types_Pkg DEFAULT_TrainTrack_TrackAtlasTypes = {
  kcg_false, { kcg_false, 0, 0.0, 0, Q_MARQSTREASON_Start_selected_by_driver,
    0.0, 0,
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA, 0 },
  { { kcg_false, { 0, 0, Q_SCALE_10_cm_scale, 0, 0, Q_DIRLRBG_Reverse,
        Q_DLRBG_Reverse, 0, 0,
        Q_LENGTH_No_train_integrity_information_available, 0, 0,
        Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision, M_LEVEL_Level_0, 0 } }, {
      kcg_false, { 0, 0, Q_SCALE_10_cm_scale, 0, 0, 0, Q_DIRLRBG_Reverse,
        Q_DLRBG_Reverse, 0, 0,
        Q_LENGTH_No_train_integrity_information_available, 0, 0,
        Q_DIRTRAIN_Reverse, M_MODE_Full_Supervision, M_LEVEL_Level_0, 0 } }, {
      kcg_false, 0, { { kcg_false, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0 } } } }, { kcg_false,
      M_ERROR_Balise_group_linking_consistency_error }, { kcg_false, 0 }, {
      kcg_false, 0 }, { kcg_false, NC_CDTRAIN_Cant_Deficiency_80_mm,
      NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category,
      0, 0,
      M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles,
      M_AXLELOADCAT_A, M_AIRTIGHT_Not_fitted, 0, 0, { {
          M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0 }, {
          M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0 }, {
          M_VOLTAGE_Line_not_fitted_with_any_traction_system, 0 } }, 0, { 0, 0,
        0 } } } };

/* TrackAtlasTypes::DEFAULT_to_Supervision */
const DataForSupervision_nextGen_t_TrackAtlasTypes DEFAULT_to_Supervision_TrackAtlasTypes = {
  kcg_false, { kcg_false, MA_L1_TrackAtlasTypes, Q_DIR_Reverse, 0, 0, kcg_false,
    0, 0, { { kcg_false, kcg_false, 0, kcg_false, 0, 0 }, { kcg_false,
        kcg_false, 0, kcg_false, 0, 0 }, { kcg_false, kcg_false, 0, kcg_false,
        0, 0 }, { kcg_false, kcg_false, 0, kcg_false, 0, 0 }, { kcg_false,
        kcg_false, 0, kcg_false, 0, 0 }, { kcg_false, kcg_false, 0, kcg_false,
        0, 0 }, { kcg_false, kcg_false, 0, kcg_false, 0, 0 }, { kcg_false,
        kcg_false, 0, kcg_false, 0, 0 }, { kcg_false, kcg_false, 0, kcg_false,
        0, 0 }, { kcg_false, kcg_false, 0, kcg_false, 0, 0 } }, kcg_false, { 0,
      0, kcg_false }, kcg_false, { 0, 0, kcg_false }, kcg_false, { 0, 0 } },
  kcg_false, { { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, {
      kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0,
      0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0,
      0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, {
      kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0,
      0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0,
      0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, {
      kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0,
      0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0,
      0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, {
      kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0,
      0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0,
      0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, {
      kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0,
      0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0,
      0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, {
      kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0,
      0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0,
      0, 0, 0 }, { kcg_false, 0, 0, 0, 0 }, { kcg_false, 0, 0, 0, 0 } },
  kcg_false, { { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0,
      0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0,
      0 }, { kcg_false, 0, 0, 0 }, { kcg_false, 0, 0, 0 } } };

/* Packets426::LRBG354_P021_1 */
const P021_trackside_int_T_TM LRBG354_P021_1_Packets426 = { kcg_true, 21, 1,
  246, 1, 0, 0, 3, 8, { { 861, 1, 6 }, { 150, 0, 5 }, { 230, 0, 1 }, { 40, 0,
      13 }, { 190, 0, 7 }, { 160, 0, 3 }, { 580, 0, 0 }, { 82, 0, 255 }, { 0, 0,
      0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0,
      0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, {
      0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0,
      0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0,
      0, 0 } } };

/* Packets426::LRBG354_P027_1 */
const P027V1_trackside_int_T_TM_baseline2 LRBG354_P027_1_Packets426 = {
  kcg_true, 27, 1, 142, 1, 0, 8, 1, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
      0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
      0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } }, 3, { { 716, 28,
      0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 761, 32, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 816, 127, 0, 0, { { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } } } };

/* Packets426::LRBG354_P003_1 */
const P003V1_trackside_int_T_TM_baseline2 LRBG354_P003_1_Packets426 = {
  kcg_true, 3, 2, 186, 1, 0, 1, { 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, 8, 8, 8, 2, 3, 5, 0, 0,
  0, 8, 200, 60, 60, 0, 35, 1, 32767, 1 };

/* Packets426::LRBG354_P005_1 */
const P005_trackside_int_T_TM LRBG354_P005_1_Packets426 = { kcg_true, 5, 1, 459,
  1, 812, 0, 0, 351, 1, 0, 2, 10, { { 54, 0, 0, 355, 1, 0, 2 }, { 154, 0, 0,
      356, 0, 0, 2 }, { 50, 0, 0, 357, 0, 0, 2 }, { 175, 0, 0, 369, 0, 0, 2 }, {
      169, 0, 0, 359, 1, 0, 2 }, { 55, 0, 0, 360, 0, 0, 2 }, { 428, 0, 0, 361,
      0, 0, 2 }, { 54, 0, 0, 362, 0, 0, 2 }, { 238, 0, 0, 363, 1, 0, 2 }, { 54,
      0, 0, 364, 1, 0, 2 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } } };

/* Packets426::LRBG354_P041_1 */
const P041_trackside_int_T_TM LRBG354_P041_1_Packets426 = { kcg_true, 41, 1, 89,
  1, 801, 3, 0, 210, 1, { { 1, 1, 210 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
    { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0,
      0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0,
      0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, {
      0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0,
      0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } } };

/* Packets426::LRBG354_P065_1 */
const P065_trackside_int_T_TM LRBG354_P065_1_Packets426 = { kcg_true, 65, 1, 71,
  1, 255, 1010, 467, 0, 28 };

/* Packets426::LRBG354_P015_1 */
const P015_trackside_int_T_TM LRBG354_P015_1_Packets426 = { kcg_true, 15, 1, 88,
  1, 0, 1023, 0, { { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0,
      0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0,
      0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 },
    { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0,
      0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0,
      0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 },
    { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0,
      0 } }, 2243, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0 };

/* Messages_426::LRBG_354_D_00275_3_M003 */
const M_003_int_T_TM_radio_messages LRBG_354_D_00275_3_M003_Messages_426 = {
  kcg_true, 3, 0, 0, 1, 354 };

/* Packets426::LRBG354_P021_2 */
const P021_trackside_int_T_TM LRBG354_P021_2_Packets426 = { kcg_true, 21, 1,
  246, 1, 0, 0, 3, 8, { { 861, 1, 6 }, { 150, 0, 5 }, { 230, 0, 1 }, { 40, 0,
      13 }, { 190, 0, 7 }, { 160, 0, 3 }, { 580, 0, 0 }, { 82, 0, 255 }, { 0, 0,
      0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0,
      0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, {
      0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0,
      0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0,
      0, 0 } } };

/* Packets426::LRBG354_P027_2 */
const P027V1_trackside_int_T_TM_baseline2 LRBG354_P027_2_Packets426 = {
  kcg_true, 27, 1, 142, 1, 0, 8, 1, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
      0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
      0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } }, 3, { { 716, 28,
      0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 761, 32, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 816, 127, 0, 0, { { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } } } };

/* Packets426::LRBG354_P003_2 */
const P003V1_trackside_int_T_TM_baseline2 LRBG354_P003_2_Packets426 = {
  kcg_true, 3, 2, 186, 1, 0, 1, { 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, 8, 8, 8, 2, 3, 5, 0, 0,
  0, 8, 200, 60, 60, 0, 35, 1, 32767, 1 };

/* Packets426::LRBG354_P005_2 */
const P005_trackside_int_T_TM LRBG354_P005_2_Packets426 = { kcg_true, 5, 1, 459,
  1, 812, 0, 0, 351, 1, 0, 2, 10, { { 54, 0, 0, 355, 1, 0, 2 }, { 154, 0, 0,
      356, 0, 0, 2 }, { 50, 0, 0, 357, 0, 0, 2 }, { 175, 0, 0, 369, 0, 0, 2 }, {
      169, 0, 0, 359, 1, 0, 2 }, { 55, 0, 0, 360, 0, 0, 2 }, { 428, 0, 0, 361,
      0, 0, 2 }, { 54, 0, 0, 362, 0, 0, 2 }, { 238, 0, 0, 363, 1, 0, 2 }, { 54,
      0, 0, 364, 1, 0, 2 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, {
      0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } } };

/* Packets426::LRBG354_P041_2 */
const P041_trackside_int_T_TM LRBG354_P041_2_Packets426 = { kcg_true, 41, 1, 89,
  1, 801, 3, 0, 210, 1, { { 1, 1, 210 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
    { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0,
      0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0,
      0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, {
      0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0,
      0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } } };

/* Packets426::LRBG354_P065_2 */
const P065_trackside_int_T_TM LRBG354_P065_2_Packets426 = { kcg_true, 65, 1, 71,
  1, 255, 1010, 467, 0, 28 };

/* Packets426::LRBG354_P015_2 */
const P015_trackside_int_T_TM LRBG354_P015_2_Packets426 = { kcg_true, 15, 1, 88,
  1, 0, 1023, 0, { { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0,
      0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0,
      0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 },
    { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0,
      0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0,
      0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 },
    { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0,
      0 } }, 2243, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0 };

/* TM::DEFAULT_P041_sections_array_flat */
const P041_sections_array_flat_T_TM DEFAULT_P041_sections_array_flat_TM = { 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/* Messages_426::LRBG_351_D_00054_9_M003 */
const M_003_int_T_TM_radio_messages LRBG_351_D_00054_9_M003_Messages_426 = {
  kcg_true, 3, 0, 0, 1, 354 };

/* Packets426::LRBG362_P021_2 */
const P021_trackside_int_T_TM LRBG362_P021_2_Packets426 = { kcg_true, 21, 0,
  174, 1, 866, 0, 2, 5, { { 34, 0, 4 }, { 480, 0, 0 }, { 210, 1, 4 }, { 160, 0,
      0 }, { 1076, 0, 255 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 },
    { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0,
      0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0,
      0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, {
      0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0,
      0 } } };

/* Packets426::LRBG362_P027_2 */
const P027V1_trackside_int_T_TM_baseline2 LRBG362_P027_2_Packets426 = {
  kcg_true, 27, 0, 86, 1, 866, 32, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
      0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
      0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } }, 1, { { 1960,
      127, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } } } };

/* Packets426::LRBG362_P005_2 */
const P005_trackside_int_T_TM LRBG362_P005_2_Packets426 = { kcg_true, 5, 0, 303,
  1, 238, 0, 0, 363, 1, 0, 2, 12, { { 54, 0, 0, 364, 1, 0, 2 }, { 172, 0, 0,
      365, 0, 0, 2 }, { 55, 0, 0, 368, 0, 0, 2 }, { 152, 0, 0, 367, 0, 0, 2 }, {
      141, 0, 0, 368, 1, 0, 2 }, { 53, 0, 0, 369, 1, 0, 2 }, { 471, 0, 0, 341,
      0, 0, 2 }, { 468, 0, 0, 370, 0, 0, 2 }, { 53, 0, 0, 371, 1, 0, 2 }, { 433,
      0, 0, 372, 0, 0, 2 }, { 200, 0, 0, 373, 0, 0, 2 }, { 232, 0, 0, 374, 1, 0,
      2 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0,
      0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0,
      0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0,
      0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0,
      0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0,
      0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0,
      0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } } };

/* Packets426::LRBG362_P065_2_R1 */
const P065_trackside_int_T_TM LRBG362_P065_2_R1_Packets426 = { kcg_true, 65, 1,
  71, 1, 255, 1010, 467, 0, 28 };

/* Packets426::LRBG362_P015_2 */
const P015_trackside_int_T_TM LRBG362_P015_2_Packets426 = { kcg_true, 15, 1, 88,
  1, 0, 1023, 0, { { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0,
      0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0,
      0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 },
    { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0,
      0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0,
      0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 },
    { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0,
      0 } }, 2776, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0 };

/* Packets426::LRBG362_P065_2_R2 */
const P065_trackside_int_T_TM LRBG362_P065_2_R2_Packets426 = { kcg_true, 65, 0,
  71, 1, 255, 2226, 550, 0, 28 };

/* Messages_426::LRBG_362_D_00238_9_M003 */
const M_003_int_T_TM_radio_messages LRBG_362_D_00238_9_M003_Messages_426 = {
  kcg_true, 3, 0, 0, 1, 362 };

/* Packets426::LRBG364_P021 */
const P021_trackside_int_T_TM LRBG364_P021_Packets426 = { kcg_true, 21, 1, 678,
  1, 2484, 0, 3, 26, { { 1294, 1, 6 }, { 430, 0, 4 }, { 410, 0, 11 }, { 150, 0,
      23 }, { 280, 0, 8 }, { 180, 1, 9 }, { 160, 1, 23 }, { 230, 1, 13 }, { 60,
      1, 9 }, { 180, 0, 1 }, { 150, 0, 5 }, { 190, 0, 2 }, { 430, 0, 0 }, { 160,
      1, 1 }, { 310, 0, 0 }, { 560, 1, 1 }, { 520, 0, 2 }, { 230, 0, 0 }, { 220,
      0, 1 }, { 110, 1, 1 }, { 580, 0, 0 }, { 170, 1, 1 }, { 770, 0, 1 }, { 260,
      0, 0 }, { 680, 0, 1 }, { 552, 0, 255 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0,
      0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } } };

/* Packets426::LRBG364_P027 */
const P027V1_trackside_int_T_TM_baseline2 LRBG364_P027_Packets426 = { kcg_true,
  27, 0, 86, 1, 2484, 32, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
      0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
      0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } }, 1, { { 9266, 127, 0, 0,
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0,
          0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, {
      0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
        { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 } } }, { 0, 0, 0, 0, { { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, {
          0, 0 } } } } };

/* Packets426::LRBG364_P005 */
const P005_trackside_int_T_TM LRBG364_P005_Packets426 = { kcg_true, 5, 0, 1200,
  1, 172, 0, 0, 365, 0, 0, 2, 29, { { 55, 0, 0, 366, 0, 0, 2 }, { 152, 0, 0,
      367, 0, 0, 2 }, { 141, 0, 0, 368, 0, 0, 2 }, { 53, 0, 0, 369, 0, 0, 2 }, {
      471, 0, 0, 341, 0, 0, 2 }, { 468, 0, 0, 370, 0, 0, 2 }, { 53, 0, 0, 371,
      1, 0, 2 }, { 433, 0, 0, 372, 0, 0, 2 }, { 200, 0, 0, 373, 0, 0, 2 }, {
      232, 0, 0, 374, 1, 0, 2 }, { 468, 0, 0, 375, 0, 0, 2 }, { 449, 0, 0, 376,
      0, 0, 2 }, { 371, 0, 0, 377, 0, 0, 2 }, { 415, 0, 0, 378, 1, 0, 2 }, { 54,
      0, 0, 379, 1, 0, 2 }, { 227, 0, 0, 380, 0, 0, 2 }, { 54, 0, 0, 381, 0, 0,
      2 }, { 200, 0, 0, 382, 0, 0, 2 }, { 500, 0, 0, 383, 0, 0, 2 }, { 430, 0,
      0, 384, 1, 0, 2 }, { 65, 0, 0, 385, 1, 0, 2 }, { 189, 0, 0, 386, 0, 0,
      2 }, { 54, 0, 0, 387, 0, 0, 2 }, { 500, 0, 0, 388, 0, 0, 2 }, { 748, 0, 0,
      389, 1, 0, 2 }, { 107, 0, 0, 390, 0, 0, 2 }, { 501, 0, 0, 391, 0, 0, 2 },
    { 874, 0, 0, 392, 1, 0, 2 }, { 108, 0, 0, 0, 0, 1, 2 }, { 0, 0, 0, 0, 0, 0,
      0 }, { 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0, 0 } } };

/* Packets426::LRBG364_P065 */
const P065_trackside_int_T_TM LRBG364_P065_Packets426 = { kcg_true, 65, 0, 71,
  1, 255, 1934, 560, 0, 28 };

/* Packets426::LRBG364_P015 */
const P015_trackside_int_T_TM LRBG364_P015_Packets426 = { kcg_true, 15, 1, 88,
  1, 0, 1023, 0, { { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0,
      0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0,
      0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 },
    { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0,
      0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0,
      0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 },
    { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0,
      0 } }, 11700, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0 };

/* TM::DEFAULT_P021_sections_array_flat */
const P021_sections_array_flat_T_TM DEFAULT_P021_sections_array_flat_TM = { 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/* TM_baseline2::DEFAULT_P027V1_sections_array_qdiff_flat */
const P027V1_sections_array_flat_qdiff_T_TM_baseline2 DEFAULT_P027V1_sections_array_qdiff_flat_TM_baseline2 = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/* TM::DEFAULT_P005_sections_array_flat */
const P005_sections_array_flat_T_TM DEFAULT_P005_sections_array_flat_TM = { 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/* TM::DEFAULT_P015_sections_array_flat */
const P015_sections_array_flat_T_TM DEFAULT_P015_sections_array_flat_TM = { 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/* TM::DEFAULT_Headers */
const Metadata_T_Common_Types_Pkg DEFAULT_Headers_TM = { { 0, Q_DIR_Reverse,
    kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0,
    Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, {
    0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 },
  { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 },
  { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 },
  { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 },
  { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 },
  { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 },
  { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 },
  { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 },
  { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 },
  { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 },
  { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 },
  { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 },
  { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0,
    0 } };

/* Messages_426::LRBG_364_D_00091_1_M003 */
const M_003_int_T_TM_radio_messages LRBG_364_D_00091_1_M003_Messages_426 = {
  kcg_true, 24, 0, 0, 1, 364 };

/* TM_RBC_conversions_legacy::default_header */
const Radio_TrackTrain_Header_T_Radio_Types_Pkg default_header_TM_RBC_conversions_legacy = {
  0, 0, 0, 0.0, M_ACK_No_acknowledgement_required, 0, 0.0, 0,
  Q_SCALE_10_cm_scale, 0, 0.0, 0, Q_DIR_Reverse, 0,
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS };

/* US_Integration_June::no_packets */
const CompressedPackets_T_Common_Types_Pkg no_packets_US_Integration_June = { {
    { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0,
      0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false,
      0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse,
      kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0,
      Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, {
      0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0,
      0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false,
      0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse,
      kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0,
      Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, {
      0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0,
      0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false,
      0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse,
      kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0,
      Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 }, {
      0, Q_DIR_Reverse, kcg_false, 0, 0 }, { 0, Q_DIR_Reverse, kcg_false, 0,
      0 }, { 0, Q_DIR_Reverse, kcg_false, 0, 0 } }, { 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };

/* US_Integration_June::no_message */
const M_TrackTrain_Radio_T_TM_radio_messages no_message_US_Integration_June = {
  kcg_false, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

