/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InsertElemFIFO_DMI_Control_Pkg_Utils.h"

void InsertElemFIFO_init_DMI_Control_Pkg_Utils(
  outC_InsertElemFIFO_DMI_Control_Pkg_Utils *outC)
{
  outC->init = kcg_true;
  outC->entryValue = 0;
  outC->condition = kcg_true;
}


void InsertElemFIFO_reset_DMI_Control_Pkg_Utils(
  outC_InsertElemFIFO_DMI_Control_Pkg_Utils *outC)
{
  outC->init = kcg_true;
}

/* DMI_Control_Pkg::Utils::InsertElemFIFO */
void InsertElemFIFO_DMI_Control_Pkg_Utils(
  /* DMI_Control_Pkg::Utils::InsertElemFIFO::index */ kcg_int index,
  /* DMI_Control_Pkg::Utils::InsertElemFIFO::counterValue */ kcg_int counterValue,
  /* DMI_Control_Pkg::Utils::InsertElemFIFO::newIndexMsg */ kcg_int newIndexMsg,
  outC_InsertElemFIFO_DMI_Control_Pkg_Utils *outC)
{
  /* DMI_Control_Pkg::Utils::InsertElemFIFO::_L4 */ kcg_bool _L4;
  
  _L4 = index == counterValue;
  if (_L4) {
    outC->entryValue = newIndexMsg;
  }
  else if (outC->init) {
    outC->entryValue = 0;
  }
  outC->init = kcg_false;
  outC->condition = !_L4;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** InsertElemFIFO_DMI_Control_Pkg_Utils.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

