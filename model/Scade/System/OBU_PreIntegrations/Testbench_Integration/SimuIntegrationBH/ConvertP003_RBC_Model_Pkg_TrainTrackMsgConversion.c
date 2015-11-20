/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003 */
void ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::newP003 */ P003_TM_TrainToTrack *newP003,
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::oldP003 */ PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *oldP003)
{
  static NID_PACKET noname;
  static L_PACKET _1_noname;
  static P003_nid_radio_list_t_TM_TrainToTrack _2_noname;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::_L1 */
  static P003_TM_TrainToTrack _L1;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::_L39 */
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L39;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::_L41 */
  static aNID_RADIO_T_Packet_TrainTypes_Pkg _L41;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::_L46 */
  static kcg_bool _L46;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::_L45 */
  static NID_PACKET _L45;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::_L44 */
  static L_PACKET _L44;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::_L43 */
  static N_ITER _L43;
  /* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP003::_L42 */
  static P003_nid_radio_list_t_TM_TrainToTrack _L42;
  
  kcg_copy_P003_TM_TrainToTrack(&_L1, newP003);
  _L46 = _L1.valid;
  _L43 = _L1.n_iter;
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(
    &_L41,
    (aNID_RADIO_T_Packet_TrainTypes_Pkg *)
      &cEMPTY_ANID_RADIO_RBC_Model_Pkg_TrainTrackMsgConversion);
  _L39.valid = _L46;
  _L39.number = _L43;
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(&_L39.aNID_RADIO, &_L41);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(oldP003, &_L39);
  _L45 = _L1.nid_packet;
  noname = _L45;
  _L44 = _L1.l_packet;
  _1_noname = _L44;
  kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack(&_L42, &_L1.nid_radio);
  kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack(&_2_noname, &_L42);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertP003_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

