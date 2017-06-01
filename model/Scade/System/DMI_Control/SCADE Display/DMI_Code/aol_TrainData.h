/*********************************************************
 **
 ** File  aol_TrainData.h
 **
 ** Specification File:  P:\modeling\model\Scade\System\DMI_Control\SCADE Display\Widgets\TrainData\TrainData.ogfx
 **
 ** Automatically generated by SCADE Display KCG
 ** Version 6.6.3 (build i10)
 **
 ** Date of generation: 2017-05-30T13:27:25
 ** Command line: ScadeDisplayKCG.exe -outdir P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI_Code P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI.sgfx
 *********************************************************/

#ifndef _AOL_TRAINDATA_H
#define _AOL_TRAINDATA_H

#include "sgl_types.h"

#include "aol_closebutton.h"
#include "aol_yesButton.h"

/* Accessors */
#define aol_TrainData_G_confirmTrainData(_C_) (_C_)->confirmTrainData
#define aol_TrainData_S_confirmTrainData(_C_,_V_) (_C_)->confirmTrainData = (_V_)
#define aol_TrainData_G_closeTrainDataWindow(_C_) (_C_)->closeTrainDataWindow
#define aol_TrainData_S_closeTrainDataWindow(_C_,_V_) (_C_)->closeTrainDataWindow = (_V_)
#define aol_TrainData_HOOK(_C_,_F_,_D_) 

/* Context type */
typedef struct aol_typ_TrainData_ {
  /* ------------------------- outputs -------------------------- */
  SGLbool confirmTrainData;
  SGLbool closeTrainDataWindow;
  /* ------------------------- parent priority ------------------ */
  SGLint32 _parentPriority;
  /* ------------------------- subcontexts ---------------------- */
  aol_typ_closebutton __closebutton__;
  aol_typ_yesButton __yesButton__;
} aol_typ_TrainData;

/* Associated functions */
extern void aol_TrainData_init(aol_typ_TrainData *pContext);
extern void aol_TrainData_predraw(aol_typ_TrainData *pContext);
extern void aol_TrainData_draw(aol_typ_TrainData *pContext, SGLint32 pPriority);

#endif /* _AOL_TRAINDATA_H */

/*********************************************************
 ** End of file
 ** End of generation: 2017-05-30T13:27:25
 *********************************************************/

