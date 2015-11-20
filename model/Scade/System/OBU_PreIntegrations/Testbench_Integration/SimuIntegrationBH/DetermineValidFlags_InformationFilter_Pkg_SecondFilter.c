/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineValidFlags_InformationFilter_Pkg_SecondFilter.h"

/* InformationFilter_Pkg::SecondFilter::DetermineValidFlags */
void DetermineValidFlags_InformationFilter_Pkg_SecondFilter(
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::filterPacket */ MetadataElement_T_Common_Types_Pkg *filterPacket,
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::bufferPacket */ MetadataElement_T_Common_Types_Pkg *bufferPacket,
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::packet */ MetadataElement_T_Common_Types_Pkg *packet)
{
  static NID_PACKET noname;
  static kcg_int _1_noname;
  static kcg_int _2_noname;
  static Q_DIR _3_noname;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L2 */
  static MetadataElement_T_Common_Types_Pkg _L2;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L1 */
  static MetadataElement_T_Common_Types_Pkg _L1;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L3 */
  static NID_PACKET _L3;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L4 */
  static Q_DIR _L4;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L5 */
  static kcg_bool _L5;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L6 */
  static kcg_int _L6;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L7 */
  static kcg_int _L7;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L8 */
  static NID_PACKET _L8;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L9 */
  static Q_DIR _L9;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L10 */
  static kcg_bool _L10;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L11 */
  static kcg_int _L11;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L12 */
  static kcg_int _L12;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L13 */
  static MetadataElement_T_Common_Types_Pkg _L13;
  /* InformationFilter_Pkg::SecondFilter::DetermineValidFlags::_L14 */
  static kcg_bool _L14;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L2, filterPacket);
  _L8 = _L2.nid_packet;
  _L9 = _L2.q_dir;
  _L10 = _L2.valid;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L1, bufferPacket);
  _L5 = _L1.valid;
  _L14 = _L10 | _L5;
  _L11 = _L2.startAddress;
  _L12 = _L2.endAddress;
  _L13.nid_packet = _L8;
  _L13.q_dir = _L9;
  _L13.valid = _L14;
  _L13.startAddress = _L11;
  _L13.endAddress = _L12;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(packet, &_L13);
  _L7 = _L1.endAddress;
  _L6 = _L1.startAddress;
  _L4 = _L1.q_dir;
  _L3 = _L1.nid_packet;
  noname = _L3;
  _1_noname = _L6;
  _2_noname = _L7;
  _3_noname = _L4;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DetermineValidFlags_InformationFilter_Pkg_SecondFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

