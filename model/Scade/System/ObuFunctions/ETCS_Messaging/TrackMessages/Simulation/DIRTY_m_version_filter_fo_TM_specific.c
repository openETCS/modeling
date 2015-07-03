/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T14:09:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DIRTY_m_version_filter_fo_TM_specific.h"

void DIRTY_m_version_filter_fo_reset_TM_specific(
  outC_DIRTY_m_version_filter_fo_TM_specific *outC)
{
}

/* TM_specific::DIRTY_m_version_filter_for_aprobst */
void DIRTY_m_version_filter_fo_TM_specific(
  inC_DIRTY_m_version_filter_fo_TM_specific *inC,
  outC_DIRTY_m_version_filter_fo_TM_specific *outC)
{
  kcg_copy_CompressedRadioMessage_TM(&outC->_L1, &inC->RadioMessage_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->_L1.Messages);
  outC->_L40 = 32;
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L2, &outC->_L1.Header);
  outC->_L39 = outC->_L2.nid_message;
  outC->_L41 = outC->_L40 != outC->_L39;
  outC->_L42 = 0;
  outC->_L37 = outC->_L2.m_version;
  if (outC->_L41) {
    outC->_L43 = outC->_L42;
  }
  else {
    outC->_L43 = outC->_L37;
  }
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L38, &outC->_L2);
  if (kcg_true) {
    outC->_L38.m_version = outC->_L43;
  }
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L6.Header, &outC->_L38);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L6.Messages,
    &outC->_L3);
  kcg_copy_CompressedRadioMessage_TM(&outC->RadioMessage_out, &outC->_L6);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DIRTY_m_version_filter_fo_TM_specific.c
** Generation date: 2015-07-03T14:09:22
*************************************************************$ */

