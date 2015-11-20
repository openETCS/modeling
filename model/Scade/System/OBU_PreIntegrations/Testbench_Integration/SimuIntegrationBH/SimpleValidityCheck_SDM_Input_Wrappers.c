/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SimpleValidityCheck_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::SimpleValidityCheck */
kcg_bool SimpleValidityCheck_SDM_Input_Wrappers(
  /* SDM_Input_Wrappers::SimpleValidityCheck::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDM_Input_Wrappers::SimpleValidityCheck::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* SDM_Input_Wrappers::SimpleValidityCheck::TrainPosition */ trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SDM_Input_Wrappers::SimpleValidityCheck::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SDM_Input_Wrappers::SimpleValidityCheck::dataFromTrackAtlas */ DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L1 */
  static P3_NationalValues_T_Packet_Types_Pkg _L1;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L2 */
  static odometry_T_Obu_BasicTypes_Pkg _L2;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L3 */
  static trainPosition_T_TrainPosition_Types_Pck _L3;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L4 */
  static trainData_T_TIU_Types_Pkg _L4;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L5 */
  static DataForSupervision_nextGen_t_TrackAtlasTypes _L5;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L6 */
  static kcg_bool _L6;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L7 */
  static kcg_bool _L7;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L8 */
  static kcg_bool _L8;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L9 */
  static kcg_bool _L9;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L10 */
  static kcg_bool _L10;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L11 */
  static kcg_bool _L11;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L12 */
  static kcg_bool _L12;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L13 */
  static kcg_bool _L13;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L14 */
  static odometry_T_Obu_BasicTypes_Pkg _L14;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L15 */
  static odoMotionDirection_T_Obu_BasicTypes_Pkg _L15;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L16 */
  static odoMotionDirection_T_Obu_BasicTypes_Pkg _L16;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L17 */
  static kcg_bool _L17;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L18 */
  static OdometrySpeeds_T_Obu_BasicTypes_Pkg _L18;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L19 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L19;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L20 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L20;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L22 */
  static kcg_bool _L22;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L23 */
  static kcg_bool _L23;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L24 */
  static kcg_int _L24;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L25 */
  static kcg_bool _L25;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L26 */
  static kcg_bool _L26;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L27 */
  static kcg_bool _L27;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L28 */
  static kcg_bool _L28;
  /* SDM_Input_Wrappers::SimpleValidityCheck::_L29 */
  static kcg_bool _L29;
  /* SDM_Input_Wrappers::SimpleValidityCheck::exception */
  static kcg_bool exception;
  
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L1, NationalValues);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L2, odometry);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L3, TrainPosition);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L4, trainData);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &_L5,
    dataFromTrackAtlas);
  _L6 = _L1.valid;
  _L7 = _L2.valid;
  _L8 = _L3.valid;
  _L9 = _L3.trainPositionIsUnknown;
  _L10 = _L4.valid;
  _L11 = _L5.GradientProfile[0].valid;
  _L12 = _L5.MRSP[0].valid;
  _L13 = _L5.MA.valid;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L14, odometry);
  _L15 = _L14.motionDirection;
  _L16 = cabAFirst_Obu_BasicTypes_Pkg;
  _L17 = _L15 == _L16;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&_L18, &_L14.speed);
  _L19 = _L18.v_safeNominal;
  _L20 = _L18.v_lower;
  _L22 = _L19 >= _L20;
  _L24 = 0;
  _L23 = _L24 <= _L19;
  _L29 = kcg_true;
  _L27 = kcg_true;
  _L25 = _L6 & _L7 & _L8 & _L29 & _L10 & _L27 & _L12 & _L13 & _L17 & _L23 &
    _L22;
  _L26 = !_L25;
  exception = _L26;
  noname = _L11;
  _L28 = !_L9;
  _1_noname = _L28;
  return exception;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SimpleValidityCheck_SDM_Input_Wrappers.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

