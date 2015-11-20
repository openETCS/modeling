/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator */
void DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::QueueElemIn */MsgStructure *QueueElemIn,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::QueueElemShifted */MsgStructure *QueueElemShifted,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::Pos */kcg_int Pos,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::QueueElemOut */MsgStructure *QueueElemOut)
{
  if (index < Pos) {
    kcg_copy_MsgStructure(QueueElemOut, QueueElemIn);
  }
  else {
    kcg_copy_MsgStructure(QueueElemOut, QueueElemShifted);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:35
*************************************************************$ */

