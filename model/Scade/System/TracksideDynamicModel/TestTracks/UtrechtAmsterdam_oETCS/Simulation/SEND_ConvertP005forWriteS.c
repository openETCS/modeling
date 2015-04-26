/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_ConvertP005forWriteS.h"

void SEND_ConvertP005forWriteS_reset(outC_SEND_ConvertP005forWriteS *outC)
{
}

/* SEND_ConvertP005forWriteSection_IT */
void SEND_ConvertP005forWriteS(
  /* SEND_ConvertP005forWriteSection_IT::SectionStruct */TM_P005E_T *SectionStruct,
  outC_SEND_ConvertP005forWriteS *outC)
{
  kcg_bool noname;
  
  kcg_copy_TM_P005E_T(&outC->_L365, SectionStruct);
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
  kcg_copy_TM_P005E_array_T(&outC->SectionArray, &outC->_L383);
  noname = outC->_L367;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_ConvertP005forWriteS.c
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

