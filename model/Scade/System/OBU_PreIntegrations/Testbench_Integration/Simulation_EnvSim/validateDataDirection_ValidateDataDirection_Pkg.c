/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirection_ValidateDataDirection_Pkg.h"

/* ValidateDataDirection_Pkg::validateDataDirection */
void validateDataDirection_ValidateDataDirection_Pkg(
  /* ValidateDataDirection_Pkg::validateDataDirection::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirection_Pkg::validateDataDirection::inLRBG */positionedBG_T_TrainPosition_Types_Pck *inLRBG,
  /* ValidateDataDirection_Pkg::validateDataDirection::inPositionedBGs */positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */ReceivedMessage_T_Common_Types_Pkg *outMessage)
{
  static Q_DIRTRAIN tmp1;
  static kcg_bool tmp;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L48 */
  static positionedBG_T_TrainPosition_Types_Pck _L48_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2 */
  static kcg_bool IfBlock2_clock_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::trainRunningDirection */
  static Q_DIRTRAIN trainRunningDirection_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::coordinateSystemAssigned */
  static kcg_bool coordinateSystemAssigned_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L22 */
  static positionedBG_T_TrainPosition_Types_Pck _L22_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L107 */
  static kcg_bool _L107_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (*inMessage).source == msrc_Eurobalise_Common_Types_Pkg;
  if (IfBlock1_clock) {
    /* 2 */
    validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
      inMessage,
      (*inMessage).BG_Common_Header.trainRunningDirectionToBG,
      kcg_true,
      trainPosition,
      (kcg_bool)
        !(*inMessage).BG_Common_Header.noCoordinateSystemHasBeenAssigned,
      outMessage);
  }
  else {
    else_clock_IfBlock1 = (*inMessage).source ==
      msrc_Euroradio_Common_Types_Pkg;
    if (else_clock_IfBlock1) {
      /* 10 */
      getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
        inMessage,
        inPositionedBGs,
        &_L22_IfBlock1);
      _L107_IfBlock1 = (*trainPosition).valid &
        !(*trainPosition).trainPositionIsUnknown;
      if (_L22_IfBlock1.valid) {
        coordinateSystemAssigned_IfBlock1 =
          !_L22_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned;
        trainRunningDirection_IfBlock1 =
          _L22_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG;
      }
      else {
        coordinateSystemAssigned_IfBlock1 = kcg_false;
        trainRunningDirection_IfBlock1 = Q_DIRTRAIN_Unknown;
      }
      IfBlock2_clock_IfBlock1 = (*inMessage).radioMetadata.q_dir &
        !((((*inMessage).Radio_Common_Header.q_dir == Q_DIR_Nominal) &
            (Q_DIRTRAIN_Nominal == trainRunningDirection_IfBlock1) &
            _L107_IfBlock1 & coordinateSystemAssigned_IfBlock1 &
            (*inLRBG).valid) | (((*inMessage).Radio_Common_Header.q_dir ==
              Q_DIR_Reverse) & (Q_DIRTRAIN_Reverse ==
              trainRunningDirection_IfBlock1) & _L107_IfBlock1 &
            coordinateSystemAssigned_IfBlock1 & (*inLRBG).valid) |
          ((*inMessage).Radio_Common_Header.q_dir == Q_DIR_Both_directions));
      if (IfBlock2_clock_IfBlock1) {
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(outMessage, inMessage);
        (*outMessage).valid = kcg_false;
      }
      else {
        /* 6 */
        getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
          inMessage,
          inPositionedBGs,
          &_L48_IfBlock1_IfBlock2);
        if (_L48_IfBlock1_IfBlock2.valid) {
          tmp1 =
            _L48_IfBlock1_IfBlock2.infoFromPassing.BG_Header.trainRunningDirectionToBG;
          tmp =
            !_L48_IfBlock1_IfBlock2.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned;
        }
        else {
          tmp = kcg_false;
          tmp1 = Q_DIRTRAIN_Unknown;
        }
        /* 6 */
        validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
          inMessage,
          tmp1,
          (*inLRBG).valid,
          trainPosition,
          tmp,
          outMessage);
      }
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(outMessage, inMessage);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** validateDataDirection_ValidateDataDirection_Pkg.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

