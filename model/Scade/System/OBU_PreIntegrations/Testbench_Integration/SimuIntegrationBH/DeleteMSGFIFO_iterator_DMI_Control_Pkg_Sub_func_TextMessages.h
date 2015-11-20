/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MsgStructure /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::QueueElemOut */ QueueElemOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::_L15 */ _L15;
  kcg_bool /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::_L16 */ _L16;
  kcg_int /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::_L17 */ _L17;
  MsgStructure /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::_L19 */ _L19;
  MsgStructure /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::_L30 */ _L30;
  MsgStructure /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::_L35 */ _L35;
} outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator */
extern void DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::index */ kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::QueueElemIn */ MsgStructure *QueueElemIn,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::QueueElemShifted */ MsgStructure *QueueElemShifted,
  /* DMI_Control_Pkg::Sub_func::TextMessages::DeleteMSGFIFO_iterator::Pos */ kcg_int Pos,
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void DeleteMSGFIFO_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void DeleteMSGFIFO_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** DeleteMSGFIFO_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

