/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertReceivedMess.h"

void ConvertReceivedMess_reset(outC_ConvertReceivedMess *outC)
{
}

/* ConvertReceivedMess */
void ConvertReceivedMess(
  /* ConvertReceivedMess::CompressedRM */CompressedRadioMessage_TM *CompressedRM,
  /* ConvertReceivedMess::CompressedPackets */CompressedPackets_T_Common_Types_Pkg *CompressedPackets,
  /* ConvertReceivedMess::RadioTrackTrainHd */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHd,
  outC_ConvertReceivedMess *outC)
{
  CompressedRadioMessage_TM noname;
  
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &outC->_L41,
    (RBC_Id_T_Common_Types_Pkg *) &cSendingRBC);
  outC->_L40 = cSource;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L39,
    (RadioMetadata_T_Common_Types_Pkg *) &cRadioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &outC->_L38,
    (BG_Header_T_BG_Types_Pkg *) &cBGHeader);
  outC->_L36 = kcg_true;
  kcg_copy_CompressedRadioMessage_TM(&outC->_L2, CompressedRM);
  kcg_copy_CompressedRadioMessage_TM(&noname, &outC->_L2);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L4,
    RadioTrackTrainHd);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, CompressedPackets);
  outC->_L1.valid = outC->_L36;
  outC->_L1.source = outC->_L40;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L1.radioMetadata,
    &outC->_L39);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L1.BG_Common_Header, &outC->_L38);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L1.Radio_Common_Header,
    &outC->_L4);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L1.packets, &outC->_L3);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L1.sendingRBC, &outC->_L41);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->Received_Message,
    &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertReceivedMess.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

