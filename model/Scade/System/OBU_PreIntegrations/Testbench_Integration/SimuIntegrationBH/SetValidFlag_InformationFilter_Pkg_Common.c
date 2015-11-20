/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SetValidFlag_InformationFilter_Pkg_Common.h"

/* InformationFilter_Pkg::Common::SetValidFlag */
void SetValidFlag_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::SetValidFlag::inValidFlag */ kcg_bool inValidFlag,
  /* InformationFilter_Pkg::Common::SetValidFlag::inPacket */ MetadataElement_T_Common_Types_Pkg *inPacket,
  /* InformationFilter_Pkg::Common::SetValidFlag::outPacket */ MetadataElement_T_Common_Types_Pkg *outPacket)
{
  /* InformationFilter_Pkg::Common::SetValidFlag::_L2 */
  static MetadataElement_T_Common_Types_Pkg _L2;
  /* InformationFilter_Pkg::Common::SetValidFlag::_L1 */
  static kcg_bool _L1;
  /* InformationFilter_Pkg::Common::SetValidFlag::_L3 */
  static MetadataElement_T_Common_Types_Pkg _L3;
  /* InformationFilter_Pkg::Common::SetValidFlag::_L4 */
  static NID_PACKET _L4;
  /* InformationFilter_Pkg::Common::SetValidFlag::_L5 */
  static Q_DIR _L5;
  /* InformationFilter_Pkg::Common::SetValidFlag::_L6 */
  static kcg_bool _L6;
  /* InformationFilter_Pkg::Common::SetValidFlag::_L8 */
  static kcg_int _L8;
  /* InformationFilter_Pkg::Common::SetValidFlag::_L7 */
  static kcg_int _L7;
  /* InformationFilter_Pkg::Common::SetValidFlag::_L9 */
  static kcg_bool _L9;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L2, inPacket);
  _L1 = inValidFlag;
  _L4 = _L2.nid_packet;
  _L5 = _L2.q_dir;
  _L6 = _L2.valid;
  _L9 = _L6 & _L1;
  _L8 = _L2.startAddress;
  _L7 = _L2.endAddress;
  _L3.nid_packet = _L4;
  _L3.q_dir = _L5;
  _L3.valid = _L9;
  _L3.startAddress = _L8;
  _L3.endAddress = _L7;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(outPacket, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SetValidFlag_InformationFilter_Pkg_Common.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

