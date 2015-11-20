/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.h"

/* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General */
void validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainRunningDirectionFromBG */Q_DIRTRAIN trainRunningDirectionFromBG,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::LRBGKnown */kcg_bool LRBGKnown,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::coordinateSystemAssigned */kcg_bool coordinateSystemAssigned,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::outMessage */ReceivedMessage_T_Common_Types_Pkg *outMessage)
{
  static array__155012 tmp;
  static kcg_int i;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainPositionKnown */
  static kcg_bool trainPositionKnown;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L55 */
  static kcg_bool _L55;
  
  (*outMessage).source = (*inMessage).source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &(*outMessage).radioMetadata,
    &(*inMessage).radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &(*outMessage).BG_Common_Header,
    &(*inMessage).BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*outMessage).Radio_Common_Header,
    &(*inMessage).Radio_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*outMessage).sendingRBC,
    &(*inMessage).sendingRBC);
  trainPositionKnown = (*trainPosition).valid &
    !(*trainPosition).trainPositionIsUnknown;
  _L55 = (*inMessage).source == msrc_Euroradio_Common_Types_Pkg;
  (*outMessage).valid = ((((*inMessage).Radio_Common_Header.nid_message == 15) &
        ((((*inMessage).Radio_Common_Header.q_dir == Q_DIR_Nominal) &
            (Q_DIRTRAIN_Nominal == trainRunningDirectionFromBG) &
            trainPositionKnown & coordinateSystemAssigned & LRBGKnown) |
          (((*inMessage).Radio_Common_Header.q_dir == Q_DIR_Reverse) &
            (Q_DIRTRAIN_Reverse == trainRunningDirectionFromBG) &
            trainPositionKnown & coordinateSystemAssigned & LRBGKnown) |
          ((*inMessage).Radio_Common_Header.q_dir == Q_DIR_Both_directions)) &
        _L55) | ((*inMessage).source == msrc_Eurobalise_Common_Types_Pkg) |
      (_L55 & ((*inMessage).Radio_Common_Header.nid_message != 15))) &
    (*inMessage).valid;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*outMessage).packets,
    &(*inMessage).packets);
  for (i = 0; i < 30; i++) {
    /* 1 */
    validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &(*inMessage).packets.PacketHeaders[i],
      trainRunningDirectionFromBG,
      LRBGKnown,
      trainPosition,
      coordinateSystemAssigned,
      &tmp[i]);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &(*outMessage).packets.PacketHeaders,
    &tmp);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

