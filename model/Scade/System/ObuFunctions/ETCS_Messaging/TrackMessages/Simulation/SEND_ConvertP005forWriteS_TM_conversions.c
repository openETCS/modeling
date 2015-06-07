/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:28:38
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_ConvertP005forWriteS_TM_conversions.h"

void SEND_ConvertP005forWriteS_reset_TM_conversions(
  outC_SEND_ConvertP005forWriteS_TM_conversions *outC)
{
}

/* TM_conversions::SEND_ConvertP005forWriteSection_IT */
void SEND_ConvertP005forWriteS_TM_conversions(
  /* TM_conversions::SEND_ConvertP005forWriteSection_IT::SectionStruct */P005E_Told_TM *SectionStruct,
  outC_SEND_ConvertP005forWriteS_TM_conversions *outC)
{
  kcg_bool noname;
  
  kcg_copy_P005E_Told_TM(&outC->_L365, SectionStruct);
  outC->_L374 = outC->_L365.Q_LOCACC;
  outC->_L373 = outC->_L365.Q_LINKREACTION;
  outC->_L372 = outC->_L365.Q_LINKORIENTATION;
  outC->_L371 = outC->_L365.NID_BG;
  outC->_L370 = outC->_L365.NID_C;
  outC->_L369 = outC->_L365.Q_NEWCOUNTRY;
  outC->_L368 = outC->_L365.D_LINK;
  outC->_L383[0] = outC->_L368;
  outC->_L383[1] = outC->_L369;
  outC->_L383[2] = outC->_L370;
  outC->_L383[3] = outC->_L371;
  outC->_L383[4] = outC->_L372;
  outC->_L383[5] = outC->_L373;
  outC->_L383[6] = outC->_L374;
  outC->_L367 = outC->_L365.valid;
  kcg_copy_P005E_array_Told_TM(&outC->SectionArray, &outC->_L383);
  noname = outC->_L367;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_ConvertP005forWriteS_TM_conversions.c
** Generation date: 2015-06-05T13:28:38
*************************************************************$ */

