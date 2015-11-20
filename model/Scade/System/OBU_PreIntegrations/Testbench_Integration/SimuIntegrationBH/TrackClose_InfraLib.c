/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackClose_InfraLib.h"

/* InfraLib::TrackClose */
void TrackClose_InfraLib(
  /* InfraLib::TrackClose::SectionData_in */ TrackSectionData_T_InfraLib *SectionData_in,
  /* InfraLib::TrackClose::BaliseMessage */ CompressedBaliseMessage_TM *BaliseMessage)
{
  /* InfraLib::TrackClose::_L1 */
  static TrackSectionData_T_InfraLib _L1;
  /* InfraLib::TrackClose::_L6 */
  static CompressedBaliseMessage_TM _L6;
  
  kcg_copy_TrackSectionData_T_InfraLib(&_L1, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&_L6, &_L1.BG_Message);
  kcg_copy_CompressedBaliseMessage_TM(BaliseMessage, &_L6);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TrackClose_InfraLib.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

