/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG */
void WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::isNominal */ kcg_bool isNominal,
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::passedBG_in */ ReceivedMessage_T_Common_Types_Pkg *passedBG_in,
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg *passedBG_out)
{
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L14 */
  static kcg_bool _L14;
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L15 */
  static ReceivedMessage_T_Common_Types_Pkg _L15;
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L16 */
  static ReceivedMessage_T_Common_Types_Pkg _L16;
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L18 */
  static Q_DIRLRBG _L18;
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L19 */
  static ReceivedMessage_T_Common_Types_Pkg _L19;
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L21 */
  static Q_DIRTRAIN _L21;
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L25 */
  static ReceivedMessage_T_Common_Types_Pkg _L25;
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L23 */
  static ReceivedMessage_T_Common_Types_Pkg _L23;
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L22 */
  static ReceivedMessage_T_Common_Types_Pkg _L22;
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L27 */
  static Q_DIRTRAIN _L27;
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::_L28 */
  static Q_DIRLRBG _L28;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, passedBG_in);
  _L14 = isNominal;
  _L18 = cQDirLrbgNominal_CheckBGConsistency_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L16, &_L1);
  if (kcg_true) {
    _L16.BG_Common_Header.trainOrientationToBG = _L18;
  }
  _L21 = cQqDirTrainNominal_CheckBGConsistency_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L19, &_L16);
  if (kcg_true) {
    _L19.BG_Common_Header.trainRunningDirectionToBG = _L21;
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L23, passedBG_in);
  _L28 = cQDirLrbgRevers_CheckBGConsistency_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L25, &_L23);
  if (kcg_true) {
    _L25.BG_Common_Header.trainOrientationToBG = _L28;
  }
  _L27 = cQqDirTrainRevers_CheckBGConsistency_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L22, &_L25);
  if (kcg_true) {
    _L22.BG_Common_Header.trainRunningDirectionToBG = _L27;
  }
  /* 1 */ if (_L14) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L15, &_L19);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L15, &_L22);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(passedBG_out, &_L15);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

