/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_close_RadioLib.h"

/* RadioLib::RBC_close */
void RBC_close_RadioLib(
  /* RadioLib::RBC_close::RadiaDataIn */ R_data_internal_T_InfraLib *RadiaDataIn,
  /* RadioLib::RBC_close::Message_out */ M_TrackTrain_Radio_T_TM_radio_messages *Message_out,
  /* RadioLib::RBC_close::Packets_out */ CompressedPackets_T_Common_Types_Pkg *Packets_out)
{
  static kcg_int noname;
  static kcg_bool _1_noname;
  /* RadioLib::RBC_close::_L1 */
  static R_data_internal_T_InfraLib _L1;
  /* RadioLib::RBC_close::_L5 */
  static kcg_bool _L5;
  /* RadioLib::RBC_close::_L4 */
  static kcg_int _L4;
  /* RadioLib::RBC_close::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3;
  /* RadioLib::RBC_close::_L2 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L2;
  
  kcg_copy_R_data_internal_T_InfraLib(&_L1, RadiaDataIn);
  _L5 = _L1.message_sent;
  _L4 = _L1.trigger;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L3, &_L1.packets);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L2, &_L1.message);
  noname = _L4;
  _1_noname = _L5;
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(Message_out, &_L2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Packets_out, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RBC_close_RadioLib.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

