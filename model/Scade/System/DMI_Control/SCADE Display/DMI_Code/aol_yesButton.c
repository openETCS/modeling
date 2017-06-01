/*********************************************************
 **
 ** File  aol_yesButton.c
 **
 ** Specification File:  P:\modeling\model\Scade\System\DMI_Control\SCADE Display\Widgets\TrainData\yesButton.ogfx
 **
 ** Automatically generated by SCADE Display KCG
 ** Version 6.6.3 (build i10)
 **
 ** Date of generation: 2017-05-30T13:27:24
 ** Command line: ScadeDisplayKCG.exe -outdir P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI_Code P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI.sgfx
 *********************************************************/

#include "aol_yesButton.h"
#include "aol_imported_functions.h"
#include "sgl.h"


void aol_yesButton_init(aol_typ_yesButton *pContext)
{
  aol_yesButton_S_confirmData(pContext, SGL_FALSE);

  pContext->_parentPriority = 0L;

}

void aol_yesButton_predraw(aol_typ_yesButton *pContext)
{

}

void aol_yesButton_draw(aol_typ_yesButton *pContext, SGLint32 pPriority)
{
  if (SGLint32_eq(pPriority, pContext->_parentPriority)) {

    /* Object: yesButton, Type: container, OID: f132c1a2-4805-4f6e-8d05-8dbe7a535cbf */
    {

      /* Object: rectangle, Type: rectangle, OID: 33513b1e-dfd7-4541-ad11-25baf3a90cc6 */
      {
        /* filled object part */
        sglIndexColori(3L);
        sglDisable(SGL_MODULATE);
        sglEnable(SGL_POLYGON_SMOOTH);
        sglTransparency8(255L);
        sglDisable(SGL_TEXTURE_2D);
        sglDisable(SGL_TESSELLATION);
        sglBegin(SGL_POLYGON);
        sglVertex2f(-320.0F, -175.0F);
        sglVertex2f(0.0F, -175.0F);
        sglVertex2f(0.0F, -225.0F);
        sglVertex2f(-320.0F, -225.0F);
        sglEnd();
        /* outlined object part */
        sglIndexColori(1L);
        sglIndexHaloColori(-1L);
        sglIndexLineWidthi(0L);
        sglIndexLineStipplei(0L);
        sglDisable(SGL_LINE_HALOING);
        sglSetLineCaps(SGL_ROUNDED_CAPS);
        sglBegin(SGL_LINE_LOOP);
        sglVertex2f(-320.0F, -175.0F);
        sglVertex2f(0.0F, -175.0F);
        sglVertex2f(0.0F, -225.0F);
        sglVertex2f(-320.0F, -225.0F);
        sglEnd();
      }

      /* Object: text, Type: text, OID: a7350132-1565-4f38-af3f-8d346e85dec6 */
      {
        static SGLuint8 _lArray0_text[255UL] = {89U,101U,115U};
        sglIndexColori(2L);
        sglIndexFontLineWidthi(2L);
        sglIndexFonti(5L);
        sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
        sgluWriteText(-160.0F, -200.0F, _lArray0_text, 255L);
      }

      /* Object: text_1, Type: text, OID: 2072e9fb-17dc-4385-ba2d-1b9c9bf4fdc9 */
      {
        static SGLuint8 _lArray0_text_1[255UL] = {84U,114U,97U,105U,110U,32U,100U,97U,116U,97U,32U,101U,110U,116U,114U,121U,32U,99U,111U,109U,112U,108U,101U,116U,101U,63U};
        sglIndexColori(1L);
        sgluWriteText(-160.0F, -150.0F, _lArray0_text_1, 255L);
      }

      /* Object: rectangle_area, Type: rectangleArea, OID: 0dc32bff-5ab6-4eb4-9e39-afd3b94b364c */
      {
        SGLfloat _lX = 0.0F;
        SGLfloat _lY = 0.0F;
        aol_locate(-1L, &_lX, &_lY);
        aol_yesButton_G_confirmData(pContext) = sglRectangleActiveAreaGetStatus(_lX, _lY, -320.0F, -175.0F, 0.0F, -225.0F);
      }
    }
  }
}


/*********************************************************
 ** End of file
 ** End of generation: 2017-05-30T13:27:24
 *********************************************************/

