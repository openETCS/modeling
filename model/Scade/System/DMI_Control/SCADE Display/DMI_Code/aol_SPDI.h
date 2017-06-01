/*********************************************************
 **
 ** File  aol_SPDI.h
 **
 ** Specification File:  P:\modeling\model\Scade\System\DMI_Control\SCADE Display\Widgets\SPDI\SPDI.ogfx
 **
 ** Automatically generated by SCADE Display KCG
 ** Version 6.6.3 (build i10)
 **
 ** Date of generation: 2017-05-30T13:27:23
 ** Command line: ScadeDisplayKCG.exe -outdir P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI_Code P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI.sgfx
 *********************************************************/

#ifndef _AOL_SPDI_H
#define _AOL_SPDI_H

#include "sgl_types.h"


/* Accessors */
#define aol_SPDI_G_SPDI_SpeedChangeVisible(_C_) (_C_)->SPDI_SpeedChangeVisible
#define aol_SPDI_S_SPDI_SpeedChangeVisible(_C_,_V_) (_C_)->SPDI_SpeedChangeVisible = (_V_)
#define aol_SPDI_G_SPDI_SpeedChange(_C_) (_C_)->SPDI_SpeedChange
#define aol_SPDI_S_SPDI_SpeedChange(_C_,_V_) (_C_)->SPDI_SpeedChange = (_V_)
#define aol_SPDI_G_SPDI_speedChangePosition(_C_) (_C_)->SPDI_speedChangePosition
#define aol_SPDI_S_SPDI_speedChangePosition(_C_,_V_) (_C_)->SPDI_speedChangePosition = (_V_)
#define aol_SPDI_HOOK(_C_,_F_,_D_) 

/* Context type */
typedef struct aol_typ_SPDI_ {
  /* ------------------------- inputs --------------------------- */
  SGLbool SPDI_SpeedChangeVisible;
  SGLint32 SPDI_SpeedChange;
  SGLfloat SPDI_speedChangePosition;
  /* ------------------------- parent priority ------------------ */
  SGLint32 _parentPriority;
} aol_typ_SPDI;

/* Associated functions */
extern void aol_SPDI_init(aol_typ_SPDI *pContext);
extern void aol_SPDI_predraw(aol_typ_SPDI *pContext);
extern void aol_SPDI_draw(aol_typ_SPDI *pContext, SGLint32 pPriority);

#endif /* _AOL_SPDI_H */

/*********************************************************
 ** End of file
 ** End of generation: 2017-05-30T13:27:23
 *********************************************************/

