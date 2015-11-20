/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FilterSequence_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::FilterSequence */
void FilterSequence_InformationFilter_Pkg(
  /* InformationFilter_Pkg::FilterSequence::message */ ReceivedMessage_T_Common_Types_Pkg *message,
  /* InformationFilter_Pkg::FilterSequence::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FilterSequence::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::FilterSequence::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::FilterSequence::inMode */ M_MODE inMode,
  /* InformationFilter_Pkg::FilterSequence::outMessage */ ReceivedMessage_T_Common_Types_Pkg *outMessage,
  /* InformationFilter_Pkg::FilterSequence::bufferMessage */ ReceivedMessage_T_Common_Types_Pkg *bufferMessage,
  /* InformationFilter_Pkg::FilterSequence::storeInBuffer */ kcg_bool *storeInBuffer)
{
  /* InformationFilter_Pkg::FilterSequence */
  static ReceivedMessage_T_Common_Types_Pkg op_call;
  /* InformationFilter_Pkg::FilterSequence */
  static kcg_bool ck_every;
  /* InformationFilter_Pkg::FilterSequence::_L5 */
  static M_MODE _L5;
  /* InformationFilter_Pkg::FilterSequence::_L4 */
  static kcg_int _L4;
  /* InformationFilter_Pkg::FilterSequence::_L3 */
  static filterRelatedEvents_T_Common_Types_Pkg _L3;
  /* InformationFilter_Pkg::FilterSequence::_L2 */
  static M_LEVEL _L2;
  /* InformationFilter_Pkg::FilterSequence::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* InformationFilter_Pkg::FilterSequence::_L6 */
  static ReceivedMessage_T_Common_Types_Pkg _L6;
  /* InformationFilter_Pkg::FilterSequence::_L7 */
  static ReceivedMessage_T_Common_Types_Pkg _L7;
  /* InformationFilter_Pkg::FilterSequence::_L8 */
  static kcg_bool _L8;
  /* InformationFilter_Pkg::FilterSequence::_L9 */
  static ReceivedMessage_T_Common_Types_Pkg _L9;
  /* InformationFilter_Pkg::FilterSequence::_L10 */
  static ReceivedMessage_T_Common_Types_Pkg _L10;
  /* InformationFilter_Pkg::FilterSequence::_L11 */
  static kcg_bool _L11;
  /* InformationFilter_Pkg::FilterSequence::_L12 */
  static ReceivedMessage_T_Common_Types_Pkg _L12;
  /* InformationFilter_Pkg::FilterSequence::_L13 */
  static ReceivedMessage_T_Common_Types_Pkg _L13;
  /* InformationFilter_Pkg::FilterSequence::_L14 */
  static kcg_bool _L14;
  /* InformationFilter_Pkg::FilterSequence::_L15 */
  static ReceivedMessage_T_Common_Types_Pkg _L15;
  /* InformationFilter_Pkg::FilterSequence::_L16 */
  static kcg_bool _L16;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, message);
  _L2 = inLevel;
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&_L3, inFilterEvents);
  /* 1 */
  FirstFilter_InformationFilter_Pkg_FirstFilter(
    &_L1,
    _L2,
    &_L3,
    &_L6,
    &_L7,
    &_L8);
  _L4 = inSupervisingDevice;
  /* 1 */
  SecondFilter_InformationFilter_Pkg_SecondFilter(
    &_L6,
    &_L7,
    _L4,
    &_L11,
    &_L10,
    &_L9);
  _L14 = _L9.valid;
  ck_every = _L14;
  _L5 = inMode;
  /* ck_FilterSequence */ if (ck_every) {
    /* 1 */ ThirdFilter_InformationFilter_Pkg_ThirdFilter(&_L9, _L5, &op_call);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &_L13,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  /* ck_FilterSequence */ if (ck_every) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L12, &op_call);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L12, &_L13);
  }
  /* 1 */ if (_L14) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L15, &_L12);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L15, &_L9);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(outMessage, &_L15);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(bufferMessage, &_L10);
  _L16 = _L8 | _L11;
  *storeInBuffer = _L16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FilterSequence_InformationFilter_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

