/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_init_RadioLib.h"

/* RadioLib::RBC_init */
void RBC_init_RadioLib(
  /* RadioLib::RBC_init::Message_in */ M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* RadioLib::RBC_init::Packets_in */ CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* RadioLib::RBC_init::Trigger_in */ kcg_int Trigger_in,
  /* RadioLib::RBC_init::Message_sent */ kcg_bool Message_sent,
  /* RadioLib::RBC_init::R_data_out */ R_data_internal_T_InfraLib *R_data_out)
{
  /* RadioLib::RBC_init::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* RadioLib::RBC_init::_L2 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L2;
  /* RadioLib::RBC_init::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3;
  /* RadioLib::RBC_init::_L4 */
  static kcg_int _L4;
  /* RadioLib::RBC_init::_L6 */
  static kcg_bool _L6;
  
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L2, Message_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L3, Packets_in);
  _L4 = Trigger_in;
  _L6 = Message_sent;
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L1.message, &_L2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L1.packets, &_L3);
  _L1.trigger = _L4;
  _L1.message_sent = _L6;
  kcg_copy_R_data_internal_T_InfraLib(R_data_out, &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_init_RadioLib.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

