/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_MsgHdr136_radioOutput_Pkg.h"

/* radioOutput_Pkg::nextGen_MsgHdr136 */
void nextGen_MsgHdr136_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_MsgHdr136::inCommonHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *inCommonHeader,
  /* radioOutput_Pkg::nextGen_MsgHdr136::outnextGenHeader */ M_136_T_TM_radio_messages *outnextGenHeader)
{
  /* radioOutput_Pkg::nextGen_MsgHdr136::_L1 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L1;
  /* radioOutput_Pkg::nextGen_MsgHdr136::_L2 */
  static M_136_T_TM_radio_messages _L2;
  /* radioOutput_Pkg::nextGen_MsgHdr136::_L12 */
  static kcg_int _L12;
  /* radioOutput_Pkg::nextGen_MsgHdr136::_L13 */
  static kcg_bool _L13;
  /* radioOutput_Pkg::nextGen_MsgHdr136::_L14 */
  static NID_MESSAGE _L14;
  /* radioOutput_Pkg::nextGen_MsgHdr136::_L15 */
  static T_TRAIN _L15;
  /* radioOutput_Pkg::nextGen_MsgHdr136::_L16 */
  static NID_ENGINE _L16;
  
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&_L1, inCommonHeader);
  _L13 = _L1.present;
  _L14 = _L1.nid_message;
  _L12 = 0;
  _L15 = _L1.t_train;
  _L16 = _L1.nid_engine;
  _L2.valid = _L13;
  _L2.nid_message = _L14;
  _L2.l_message = _L12;
  _L2.t_train = _L15;
  _L2.nid_engine = _L16;
  kcg_copy_M_136_T_TM_radio_messages(outnextGenHeader, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextGen_MsgHdr136_radioOutput_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

