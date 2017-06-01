/*********************************************************
 **
 ** File  aol_B.c
 **
 ** Specification File:  P:\modeling\model\Scade\System\DMI_Control\SCADE Display\Widgets\B\B.ogfx
 **
 ** Automatically generated by SCADE Display KCG
 ** Version 6.6.3 (build i10)
 **
 ** Date of generation: 2017-05-30T13:27:23
 ** Command line: ScadeDisplayKCG.exe -outdir P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI_Code P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI.sgfx
 *********************************************************/

#include "aol_B.h"
#include "aol_imported_functions.h"
#include "sgl.h"


void aol_B_init(aol_typ_B *pContext)
{
  aol_B_S_TrainSpeed(pContext, 0.0F);
  aol_B_S_PointerColor(pContext, 1L);
  aol_B_S_SpeedDigitOne(pContext, 1.0F);
  aol_B_S_SpeedDigitTwo(pContext, 0.0F);
  aol_B_S_SpeedDigitThree(pContext, 0.0F);
  aol_B_S_Vperm(pContext, 0.0F);
  aol_B_S_Vtarget(pContext, 0.0F);
  aol_B_S_Vrelease(pContext, 0.0F);
  aol_B_S_VpermColor(pContext, 1L);
  aol_B_S_VtargetColor(pContext, 5L);
  aol_B_S_VreleaseColor(pContext, 4L);
  aol_B_S_ModeSymbol(pContext, 11L);
  aol_B_S_ModeSymbolVisibility(pContext, SGL_FALSE);
  aol_B_S_Vtarget_permVisible(pContext, SGL_FALSE);
  aol_B_S_Vtarget_permColor(pContext, 1L);
  aol_B_S_Vinterv(pContext, 0.0F);
  aol_B_S_VintervColor(pContext, 9L);
  aol_B_S_VintervVisible(pContext, SGL_FALSE);
  aol_B_S_OverB(pContext, SGL_FALSE);

  pContext->_parentPriority = 0L;

}

void aol_B_predraw(aol_typ_B *pContext)
{

}

void aol_B_draw(aol_typ_B *pContext, SGLint32 pPriority)
{
  SGLuint32 _lParentMasks = sglGetActiveMasks();
  if (SGLint32_eq(pPriority, pContext->_parentPriority)) {

    /* Object: B, Type: container, OID: 236e864c-042b-4ab0-abde-830b95c60993 */
    {

      /* Object: rectangle, Type: rectangle, OID: 644e294f-0a2d-4f86-bce1-a22dc0c13378 */
      {
        /* filled object part */
        sglIndexColori(6L);
        sglDisable(SGL_MODULATE);
        sglEnable(SGL_POLYGON_SMOOTH);
        sglTransparency8(255L);
        sglDisable(SGL_TEXTURE_2D);
        sglDisable(SGL_TESSELLATION);
        sglBegin(SGL_POLYGON);
        sglVertex2f(-140.0F, 150.0F);
        sglVertex2f(140.0F, 150.0F);
        sglVertex2f(140.0F, -150.0F);
        sglVertex2f(-140.0F, -150.0F);
        sglEnd();
        /* outlined object part */
        sglIndexColori(7L);
        sglIndexHaloColori(-1L);
        sglIndexLineWidthi(0L);
        sglIndexLineStipplei(0L);
        sglDisable(SGL_LINE_HALOING);
        sglSetLineCaps(SGL_ROUNDED_CAPS);
        sglBegin(SGL_LINE_LOOP);
        sglVertex2f(-140.0F, 150.0F);
        sglVertex2f(140.0F, 150.0F);
        sglVertex2f(140.0F, -150.0F);
        sglVertex2f(-140.0F, -150.0F);
        sglEnd();
      }

      /* Object: line, Type: line, OID: 8a534683-ca73-4df9-a6c5-37a01308d8e0 */
      {
        /* outlined object part */
        sglIndexColori(2L);
        sglIndexLineWidthi(1L);
        sglSetLineCaps(SGL_STRAIGHT_CAPS);
        sglBegin(SGL_LINE_STRIP);
        sglVertex2f(-140.0F, -150.0F);
        sglVertex2f(-140.0F, 150.0F);
        sglVertex2f(140.0F, 150.0F);
        sglEnd();
      }

      /* Object: line_1, Type: line, OID: fd9858e8-d1ec-4c94-a859-8307038eb5cd */
      {
        /* outlined object part */
        sglIndexColori(7L);
        sglSetLineCaps(SGL_ROUNDED_CAPS);
        sglBegin(SGL_LINE_STRIP);
        sglVertex2f(-140.0F, -150.0F);
        sglVertex2f(140.0F, -150.0F);
        sglVertex2f(140.0F, 150.0F);
        sglEnd();
      }

      /* Object: B0, Type: container, OID: b1dd2f3b-f56d-4ed8-b8b0-dba82d0c3b0c */
      {

        /* Object: SpeedIndicators, Type: container, OID: d9ba2a3b-844a-4f72-880c-c3fc36b76126 */
        {

          /* Object: 0, Type: bifont, OID: e78f0eb7-1061-4919-b932-3ff675f35c5d */
          {
            sglIndexColori(1L);
            sglIndexFontLineWidthi(2L);
            sglIndexFonti(0L);
            sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
            sglSetSecondFontAttributes(1L, 0L, 2L);
            {
              sgl_numeric_format _lFormat;
              _lFormat.l_integralPart = 5L;
              _lFormat.l_fractionalPart = 0L;
              _lFormat.l_secondFontPos = 0L;
              _lFormat.b_separator = 46U;
              _lFormat.b_leadingZeros = SGL_FALSE;
              _lFormat.l_displaySign = SGL_SIGN_WHEN_NEGATIVE;
              sgluWriteFloat(-51.0F, -78.0F, 0.0F, &_lFormat);
            }
          }

          /* Object: 50, Type: bifont, OID: a0621a76-d27d-4283-af69-678753aadfbe */
          {
            sgl_numeric_format _lFormat;
            _lFormat.l_integralPart = 5L;
            _lFormat.l_fractionalPart = 0L;
            _lFormat.l_secondFontPos = 0L;
            _lFormat.b_separator = 46U;
            _lFormat.b_leadingZeros = SGL_FALSE;
            _lFormat.l_displaySign = SGL_SIGN_WHEN_NEGATIVE;
            sgluWriteFloat(-89.0F, -12.0F, 50.0F, &_lFormat);
          }

          /* Object: 100, Type: bifont, OID: 969b00ec-cf52-41db-bbfc-fbbedac29db2 */
          {
            sgl_numeric_format _lFormat;
            _lFormat.l_integralPart = 5L;
            _lFormat.l_fractionalPart = 0L;
            _lFormat.l_secondFontPos = 0L;
            _lFormat.b_separator = 46U;
            _lFormat.b_leadingZeros = SGL_FALSE;
            _lFormat.l_displaySign = SGL_SIGN_WHEN_NEGATIVE;
            sgluWriteFloat(-65.0F, 56.0F, 100.0F, &_lFormat);
          }

          /* Object: 150, Type: bifont, OID: 3e5066ca-0d58-4de2-b957-b6f632a40543 */
          {
            sgl_numeric_format _lFormat;
            _lFormat.l_integralPart = 5L;
            _lFormat.l_fractionalPart = 0L;
            _lFormat.l_secondFontPos = 0L;
            _lFormat.b_separator = 46U;
            _lFormat.b_leadingZeros = SGL_FALSE;
            _lFormat.l_displaySign = SGL_SIGN_WHEN_NEGATIVE;
            sgluWriteFloat(0.0F, 91.0F, 150.0F, &_lFormat);
          }

          /* Object: 200, Type: bifont, OID: 2486627e-a242-48f3-8424-fe59eaff2cfb */
          {
            sgl_numeric_format _lFormat;
            _lFormat.l_integralPart = 5L;
            _lFormat.l_fractionalPart = 0L;
            _lFormat.l_secondFontPos = 0L;
            _lFormat.b_separator = 46U;
            _lFormat.b_leadingZeros = SGL_FALSE;
            _lFormat.l_displaySign = SGL_SIGN_WHEN_NEGATIVE;
            sgluWriteFloat(68.0F, 57.0F, 200.0F, &_lFormat);
          }

          /* Object: 300, Type: bifont, OID: 57e74e4b-da5e-485b-a776-0b57ac7ac301 */
          {
            sgl_numeric_format _lFormat;
            _lFormat.l_integralPart = 5L;
            _lFormat.l_fractionalPart = 0L;
            _lFormat.l_secondFontPos = 0L;
            _lFormat.b_separator = 46U;
            _lFormat.b_leadingZeros = SGL_FALSE;
            _lFormat.l_displaySign = SGL_SIGN_WHEN_NEGATIVE;
            sgluWriteFloat(82.0F, -10.0F, 300.0F, &_lFormat);
          }

          /* Object: 400, Type: bifont, OID: af167989-5d9a-45bc-ac59-bcef49bb09a0 */
          {
            sgl_numeric_format _lFormat;
            _lFormat.l_integralPart = 5L;
            _lFormat.l_fractionalPart = 0L;
            _lFormat.l_secondFontPos = 0L;
            _lFormat.b_separator = 46U;
            _lFormat.b_leadingZeros = SGL_FALSE;
            _lFormat.l_displaySign = SGL_SIGN_WHEN_NEGATIVE;
            sgluWriteFloat(50.0F, -76.0F, 400.0F, &_lFormat);
          }

          /* Object: 0_1, Type: line, OID: d49e9e42-13ab-4c9b-80af-52d62eda3e1b */
          {
            /* outlined object part */
            sglBegin(SGL_LINES);
            sglVertex2f(-54.464F, -83.867F);
            sglVertex2f(-68.08F, -104.834F);
          }

          /* Object: 10, Type: line, OID: 4d1ef476-f091-4fbc-8aba-2029857ea94f */
          {
            /* outlined object part */
            sglVertex2f(-74.739F, -80.71F);
            sglVertex2f(-84.93F, -91.716F);
          }

          /* Object: 20, Type: line, OID: e51770e7-3e37-4090-930d-e28dbb867a88 */
          {
            /* outlined object part */
            sglVertex2f(-87.386F, -66.811F);
            sglVertex2f(-99.302F, -75.922F);
          }

          /* Object: 30, Type: line, OID: 0a0322c3-65f3-4389-9739-6b912b23e841 */
          {
            /* outlined object part */
            sglVertex2f(-97.482F, -50.963F);
            sglVertex2f(-110.775F, -57.912F);
          }

          /* Object: 40, Type: line, OID: 83f93524-3017-4252-ac52-106559e5b802 */
          {
            /* outlined object part */
            sglVertex2f(-104.734F, -33.626F);
            sglVertex2f(-119.016F, -38.212F);
          }

          /* Object: 50_1, Type: line, OID: e39a3410-ead8-44a0-8638-e9c5ebf299ed */
          {
            /* outlined object part */
            sglVertex2f(-99.027F, -13.917F);
            sglVertex2f(-123.784F, -17.397F);
          }

          /* Object: 60, Type: line, OID: 3a8e83e4-bbd8-4ff2-b915-266b15595fad */
          {
            /* outlined object part */
            sglVertex2f(-109.946F, 3.455F);
            sglVertex2f(-124.938F, 3.926F);
          }

          /* Object: 70, Type: line, OID: d376ffe2-8101-4b95-9c74-c016790efcbc */
          {
            /* outlined object part */
            sglVertex2f(-107.753F, 22.119F);
            sglVertex2f(-122.447F, 25.135F);
          }

          /* Object: 80, Type: line, OID: db0b9c93-8ca4-4a4a-b360-9458d8156041 */
          {
            /* outlined object part */
            sglVertex2f(-102.416F, 40.136F);
            sglVertex2f(-116.382F, 45.61F);
          }

          /* Object: 90, Type: line, OID: 5bf87bec-de7d-47e6-8e01-c620230389a7 */
          {
            /* outlined object part */
            sglVertex2f(-94.09F, 56.983F);
            sglVertex2f(-106.921F, 64.753F);
          }

          /* Object: 100_1, Type: line, OID: 91b47035-41ba-44a4-a068-11152503282e */
          {
            /* outlined object part */
            sglVertex2f(-75.471F, 65.606F);
            sglVertex2f(-94.339F, 82.007F);
          }

          /* Object: 110, Type: line, OID: d4d1940a-91e1-4e0e-8af5-1de8cdf30671 */
          {
            /* outlined object part */
            sglVertex2f(-69.523F, 85.244F);
            sglVertex2f(-79.004F, 96.868F);
          }

          /* Object: 120, Type: line, OID: bc16daee-495a-4071-879b-3fd5b875b882 */
          {
            /* outlined object part */
            sglVertex2f(-53.999F, 95.834F);
            sglVertex2f(-61.363F, 108.902F);
          }

          /* Object: 130, Type: line, OID: 158f89bb-6da8-4e80-8338-5b5f1a8c6df5 */
          {
            /* outlined object part */
            sglVertex2f(-36.9F, 103.626F);
            sglVertex2f(-41.931F, 117.757F);
          }

          /* Object: 140, Type: line, OID: 2b9029f6-570f-4c16-9adb-1ad4d63c9001 */
          {
            /* outlined object part */
            sglVertex2f(-18.723F, 108.395F);
            sglVertex2f(-21.276F, 123.176F);
          }

          /* Object: 150_1, Type: line, OID: ac0b9e8b-6c4a-4cd3-bf3f-668e34fcb29c */
          {
            /* outlined object part */
            sglVertex2f(0.0F, 100.0F);
            sglVertex2f(0.0F, 125.0F);
          }

          /* Object: 160, Type: line, OID: e26f16db-e287-4ab4-8170-68fb9e4ceac8 */
          {
            /* outlined object part */
            sglVertex2f(18.723F, 108.395F);
            sglVertex2f(21.276F, 123.176F);
          }

          /* Object: 170, Type: line, OID: 9337520a-7be9-4b13-bac4-ce632ba98359 */
          {
            /* outlined object part */
            sglVertex2f(36.9F, 103.626F);
            sglVertex2f(41.931F, 117.757F);
          }

          /* Object: 180, Type: line, OID: ab1fb6a5-c2cc-4ef6-b95d-3dfe3ced6f82 */
          {
            /* outlined object part */
            sglVertex2f(53.999F, 95.834F);
            sglVertex2f(61.363F, 108.902F);
          }

          /* Object: 190, Type: line, OID: c6ed71fa-4351-4b9b-8dde-5722066bdb55 */
          {
            /* outlined object part */
            sglVertex2f(69.523F, 85.244F);
            sglVertex2f(79.004F, 96.868F);
          }

          /* Object: 200_1, Type: line, OID: 5cad5b28-b205-470e-8fd2-933bdddaf7da */
          {
            /* outlined object part */
            sglVertex2f(75.471F, 65.606F);
            sglVertex2f(94.339F, 82.007F);
          }

          /* Object: 210, Type: line, OID: 8c6c09ac-eb74-445d-8cc6-09a56f3b5b39 */
          {
            /* outlined object part */
            sglVertex2f(88.879F, 64.812F);
            sglVertex2f(100.999F, 73.649F);
          }

          /* Object: 220, Type: line, OID: a62730c4-5e1b-4e75-90c8-910459aaf636 */
          {
            /* outlined object part */
            sglVertex2f(94.09F, 56.983F);
            sglVertex2f(106.921F, 64.753F);
          }

          /* Object: 230, Type: line, OID: 39568be7-64a8-4a40-a740-8eaf739b3f10 */
          {
            /* outlined object part */
            sglVertex2f(98.614F, 48.738F);
            sglVertex2f(112.061F, 55.383F);
          }

          /* Object: 240, Type: line, OID: 31aa1811-d404-428a-be5b-d97c6375e6f6 */
          {
            /* outlined object part */
            sglVertex2f(102.416F, 40.137F);
            sglVertex2f(116.382F, 45.609F);
          }

          /* Object: 250, Type: line, OID: 574ec86d-1611-44da-8370-6dca8cdf64f4 */
          {
            /* outlined object part */
            sglVertex2f(95.882F, 28.402F);
            sglVertex2f(119.853F, 35.502F);
          }

          /* Object: 260, Type: line, OID: 5f045d74-cb58-435d-8fb6-c39a4061d273 */
          {
            /* outlined object part */
            sglVertex2f(107.753F, 22.119F);
            sglVertex2f(122.447F, 25.134F);
          }

          /* Object: 270, Type: line, OID: eb8730aa-054c-4e08-878d-34395a6bbf1a */
          {
            /* outlined object part */
            sglVertex2f(109.249F, 12.834F);
            sglVertex2f(124.146F, 14.583F);
          }

          /* Object: 280, Type: line, OID: d7827e22-08fe-4b76-97bf-bf20391f5fcd */
          {
            /* outlined object part */
            sglVertex2f(109.946F, 3.456F);
            sglVertex2f(124.938F, 3.926F);
          }

          /* Object: 290, Type: line, OID: ab8c60cc-d98e-498d-aebb-b17b04ebda9c */
          {
            /* outlined object part */
            sglVertex2f(109.839F, -5.948F);
            sglVertex2f(124.817F, -6.76F);
          }

          /* Object: 300_1, Type: line, OID: 784c235b-120f-4ebb-a2cb-db26a677c61e */
          {
            /* outlined object part */
            sglVertex2f(99.027F, -13.917F);
            sglVertex2f(123.784F, -17.397F);
          }

          /* Object: 310, Type: line, OID: b6d802eb-4d63-4004-a92e-baf79c06e529 */
          {
            /* outlined object part */
            sglVertex2f(107.224F, -24.557F);
            sglVertex2f(121.845F, -27.907F);
          }

          /* Object: 320, Type: line, OID: 8860a39f-8266-45eb-b586-a5cb9c6197a5 */
          {
            /* outlined object part */
            sglVertex2f(104.735F, -33.626F);
            sglVertex2f(119.016F, -38.212F);
          }

          /* Object: 330, Type: line, OID: c043d88e-9f9a-447a-93e2-6fcd9a9a36d4 */
          {
            /* outlined object part */
            sglVertex2f(101.48F, -42.449F);
            sglVertex2f(115.317F, -48.239F);
          }

          /* Object: 340, Type: line, OID: fdce03c3-af68-4327-b0dd-65244894d1e5 */
          {
            /* outlined object part */
            sglVertex2f(97.483F, -50.962F);
            sglVertex2f(110.775F, -57.912F);
          }

          /* Object: 350, Type: line, OID: fbfa5b63-edd2-4e1d-ad87-1263e632d34b */
          {
            /* outlined object part */
            sglVertex2f(84.339F, -53.73F);
            sglVertex2f(105.424F, -67.163F);
          }

          /* Object: 360, Type: line, OID: 35740560-60c7-4225-b823-c11bd52c1986 */
          {
            /* outlined object part */
            sglVertex2f(87.386F, -66.811F);
            sglVertex2f(99.302F, -75.922F);
          }

          /* Object: 370, Type: line, OID: a639dfd7-e031-4d4d-a13a-043c11337820 */
          {
            /* outlined object part */
            sglVertex2f(81.36F, -74.031F);
            sglVertex2f(92.454F, -84.127F);
          }

          /* Object: 380, Type: line, OID: 33520985-f9ea-4558-8c60-b757d7fa7dff */
          {
            /* outlined object part */
            sglVertex2f(74.739F, -80.71F);
            sglVertex2f(84.93F, -91.717F);
          }

          /* Object: 390, Type: line, OID: 3df83386-1a45-45af-be38-cf59e4bde439 */
          {
            /* outlined object part */
            sglVertex2f(67.572F, -86.799F);
            sglVertex2f(76.785F, -98.636F);
          }

          /* Object: 400_1, Type: line, OID: bf6326e9-3e03-4903-acb6-721cccfcd88d */
          {
            /* outlined object part */
            sglVertex2f(54.464F, -83.867F);
            sglVertex2f(68.08F, -104.834F);
            sglEnd();
          }
        }
      }

      /* Object: B1, Type: container, OID: 2b6e9acf-46b0-4346-987a-271f04680417 */
      {

        /* Object: SpeedPointer, Type: container, OID: b55c34d1-5c71-4f37-b37f-257eadb0fef6 */
        {

          /* Object: rotate_group, Type: functionalRotate, OID: d14a7e38-fc51-48e7-ab71-d9f72d56633a */
          {
            sglPushMatrix();
            sglRotatef(SGLfloat_add(56.88F, SGLfloat_mul((SGLfloat_lt(aol_B_G_TrainSpeed(pContext), 200.0F) ? aol_B_G_TrainSpeed(pContext) : SGLfloat_add(SGLfloat_div(SGLfloat_sub(aol_B_G_TrainSpeed(pContext), 200.0F), 2.0F), 200.0F)), -0.97898F)));

            /* Object: circle, Type: circle, OID: 49d38042-91ba-487a-8f7e-9969c2438010 */
            {
              if (SGLint32_ge(aol_B_G_PointerColor(pContext), 0L)) {
                /* filled object part */
                sglIndexColori(aol_B_G_PointerColor(pContext));
                sgluArcSector2f(0.0F, 0.0F, 25.0F, 0.0F, 360.0F, SGL_TRUE, SGL_ARC_FILLED);
              }
            }

            /* Object: shape, Type: shape, OID: 46bd69b2-8e95-461e-bdda-57ec90fdbe31 */
            {
              if (SGLint32_ge(aol_B_G_PointerColor(pContext), 0L)) {
                /* filled object part */
                sglIndexColori(aol_B_G_PointerColor(pContext));
                sglBegin(SGL_POLYGON);
                sglVertex2f(-82.0F, 4.5F);
                sglVertex2f(-25.0F, 4.5F);
                sglVertex2f(-25.0F, -4.5F);
                sglVertex2f(-82.0F, -4.5F);
                sglVertex2f(-90.0F, -1.5F);
                sglVertex2f(-105.0F, -1.5F);
                sglVertex2f(-105.0F, 1.5F);
                sglVertex2f(-90.0F, 1.5F);
                sglEnd();
              }
            }
            sglPopMatrix();
          }
        }

        /* Object: TrainSpeedDigital, Type: container, OID: 9834da57-5280-4882-b7d1-5142346ed6c9 */
        {

          /* Object: DigitOne, Type: bifont, OID: a31ac50f-93b3-40c4-88da-eac1ec1355bd */
          {
            if (SGLfloat_ne(aol_B_G_SpeedDigitOne(pContext), 0.0F)) {
              if (SGLint32_ge((SGLint32_ne(aol_B_G_PointerColor(pContext), 10L) ? 2L : 1L), 0L)) {
                sglIndexColori((SGLint32_ne(aol_B_G_PointerColor(pContext), 10L) ? 2L : 1L));
                sglIndexFontLineWidthi(3L);
                sglSetSecondFontAttributes((SGLint32_ne(aol_B_G_PointerColor(pContext), 10L) ? 2L : 1L), 0L, 2L);
                {
                  sgl_numeric_format _lFormat;
                  _lFormat.l_integralPart = 1L;
                  _lFormat.l_fractionalPart = 0L;
                  _lFormat.l_secondFontPos = 0L;
                  _lFormat.b_separator = 46U;
                  _lFormat.b_leadingZeros = SGL_FALSE;
                  _lFormat.l_displaySign = SGL_SIGN_NEVER;
                  sgluWriteFloat(-14.0F, 0.0F, aol_B_G_SpeedDigitOne(pContext), &_lFormat);
                }
              }
            }
          }

          /* Object: DigitTwo, Type: bifont, OID: d51ec384-5c57-4cd9-86da-f97a08363343 */
          {
            if (SGLbool_or(SGLfloat_ne(aol_B_G_SpeedDigitOne(pContext), 0.0F), SGLfloat_ne(aol_B_G_SpeedDigitTwo(pContext), 0.0F))) {
              if (SGLint32_ge((SGLint32_ne(aol_B_G_PointerColor(pContext), 10L) ? 2L : 1L), 0L)) {
                sglIndexColori((SGLint32_ne(aol_B_G_PointerColor(pContext), 10L) ? 2L : 1L));
                sglIndexFontLineWidthi(3L);
                sglSetSecondFontAttributes((SGLint32_ne(aol_B_G_PointerColor(pContext), 10L) ? 2L : 1L), 0L, 2L);
                {
                  sgl_numeric_format _lFormat;
                  _lFormat.l_integralPart = 1L;
                  _lFormat.l_fractionalPart = 0L;
                  _lFormat.l_secondFontPos = 0L;
                  _lFormat.b_separator = 46U;
                  _lFormat.b_leadingZeros = SGL_FALSE;
                  _lFormat.l_displaySign = SGL_SIGN_NEVER;
                  sgluWriteFloat(0.0F, 0.0F, aol_B_G_SpeedDigitTwo(pContext), &_lFormat);
                }
              }
            }
          }

          /* Object: DigitThree, Type: bifont, OID: c51b9b7a-cb6a-4319-886e-51f505b3aa74 */
          {
            if (SGLint32_ge((SGLint32_ne(aol_B_G_PointerColor(pContext), 10L) ? 2L : 1L), 0L)) {
              sglIndexColori((SGLint32_ne(aol_B_G_PointerColor(pContext), 10L) ? 2L : 1L));
              sglIndexFontLineWidthi(3L);
              sglSetSecondFontAttributes((SGLint32_ne(aol_B_G_PointerColor(pContext), 10L) ? 2L : 1L), 0L, 2L);
              {
                sgl_numeric_format _lFormat;
                _lFormat.l_integralPart = 1L;
                _lFormat.l_fractionalPart = 0L;
                _lFormat.l_secondFontPos = 0L;
                _lFormat.b_separator = 46U;
                _lFormat.b_leadingZeros = SGL_FALSE;
                _lFormat.l_displaySign = SGL_SIGN_NEVER;
                sgluWriteFloat(14.0F, 0.0F, aol_B_G_SpeedDigitThree(pContext), &_lFormat);
              }
            }
          }
        }
      }

      /* Object: B2, Type: container, OID: 56652a64-b887-4451-b78c-560263a93771 */
      {

        /* Object: CircularSpeedGauge, Type: referenceContainer, OID: 4b7e3263-a947-4cd6-8a2f-bb6d77e64442 */
        {
          aol_typ_CircularSpeedGauge _lSubContextVar;
          aol_typ_CircularSpeedGauge *_lSubContext = &_lSubContextVar;
          aol_CircularSpeedGauge_init(_lSubContext);
          aol_CircularSpeedGauge_S_Vinterv(_lSubContext, aol_B_G_Vinterv(pContext));
          aol_CircularSpeedGauge_S_VintervColor(_lSubContext, aol_B_G_VintervColor(pContext));
          aol_CircularSpeedGauge_S_VintervVisible(_lSubContext, aol_B_G_VintervVisible(pContext));
          aol_CircularSpeedGauge_S_Vperm(_lSubContext, aol_B_G_Vperm(pContext));
          aol_CircularSpeedGauge_S_VpermColor(_lSubContext, aol_B_G_VpermColor(pContext));
          aol_CircularSpeedGauge_S_VpermVisible(_lSubContext, SGLfloat_gt(aol_B_G_Vperm(pContext), 0.0F));
          aol_CircularSpeedGauge_S_Vrelease(_lSubContext, aol_B_G_Vrelease(pContext));
          aol_CircularSpeedGauge_S_VreleaseColor(_lSubContext, aol_B_G_VreleaseColor(pContext));
          aol_CircularSpeedGauge_S_VreleaseVisible(_lSubContext, SGLfloat_gt(aol_B_G_Vrelease(pContext), 0.0F));
          aol_CircularSpeedGauge_S_Vtarget(_lSubContext, aol_B_G_Vtarget(pContext));
          aol_CircularSpeedGauge_S_VtargetColor(_lSubContext, aol_B_G_VtargetColor(pContext));
          aol_CircularSpeedGauge_S_VtargetVisible(_lSubContext, SGLfloat_gt(aol_B_G_Vtarget(pContext), 0.0F));
          aol_CircularSpeedGauge_S_Vtarget_permColor(_lSubContext, aol_B_G_Vtarget_permColor(pContext));
          aol_CircularSpeedGauge_S_Vtarget_permVisible(_lSubContext, aol_B_G_Vtarget_permVisible(pContext));
          _lSubContext->_parentPriority = pContext->_parentPriority;
          aol_CircularSpeedGauge_draw(_lSubContext, pPriority);
        }
      }

      /* Object: B3, Type: container, OID: 33b86b49-bcc3-48ad-a1e6-f26820c86062 */
      {

        /* Object: B3_1, Type: rectangle, OID: f15e4c1b-e43a-4634-b577-251c79d19be2 */
        {
          sglSetActiveMasks(_lParentMasks);
          /* filled object part */
          sglIndexColori(6L);
          sglDisable(SGL_MODULATE);
          sglEnable(SGL_POLYGON_SMOOTH);
          sglTransparency8(255L);
          sglDisable(SGL_TEXTURE_2D);
          sglDisable(SGL_TESSELLATION);
          sglBegin(SGL_POLYGON);
          sglVertex2f(-54.0F, -106.0F);
          sglVertex2f(-18.0F, -106.0F);
          sglVertex2f(-18.0F, -142.0F);
          sglVertex2f(-54.0F, -142.0F);
          sglEnd();
          /* outlined object part */
          sglIndexColori(7L);
          sglIndexHaloColori(-1L);
          sglIndexLineWidthi(0L);
          sglIndexLineStipplei(0L);
          sglDisable(SGL_LINE_HALOING);
          sglSetLineCaps(SGL_STRAIGHT_CAPS);
          sglBegin(SGL_LINE_LOOP);
          sglVertex2f(-54.0F, -106.0F);
          sglVertex2f(-18.0F, -106.0F);
          sglVertex2f(-18.0F, -142.0F);
          sglVertex2f(-54.0F, -142.0F);
          sglEnd();
        }

        /* Object: TR_border, Type: line, OID: 963f9ed6-77fb-4b8b-bf5b-3144fbb4f5bc */
        {
          /* outlined object part */
          sglIndexColori(2L);
          sglSetLineCaps(SGL_ROUNDED_CAPS);
          sglBegin(SGL_LINE_STRIP);
          sglVertex2f(-54.0F, -142.0F);
          sglVertex2f(-54.0F, -106.0F);
          sglVertex2f(-18.0F, -106.0F);
          sglEnd();
        }
      }

      /* Object: B4, Type: container, OID: 98e11f45-42f8-490f-9e9c-527fd4ed9b0a */
      {

        /* Object: B4_1, Type: rectangle, OID: 8bab8359-ca9e-4f17-938d-befeb81a9ae0 */
        {
          /* filled object part */
          sglIndexColori(6L);
          sglBegin(SGL_POLYGON);
          sglVertex2f(-18.0F, -106.0F);
          sglVertex2f(18.0F, -106.0F);
          sglVertex2f(18.0F, -142.0F);
          sglVertex2f(-18.0F, -142.0F);
          sglEnd();
          /* outlined object part */
          sglIndexColori(7L);
          sglBegin(SGL_LINE_LOOP);
          sglVertex2f(-18.0F, -106.0F);
          sglVertex2f(18.0F, -106.0F);
          sglVertex2f(18.0F, -142.0F);
          sglVertex2f(-18.0F, -142.0F);
          sglEnd();
        }

        /* Object: TR_border_1, Type: line, OID: a7dc35a9-64a2-4744-acda-7cf045e2bbde */
        {
          /* outlined object part */
          sglIndexColori(2L);
          sglBegin(SGL_LINE_STRIP);
          sglVertex2f(-18.0F, -142.0F);
          sglVertex2f(-18.0F, -106.0F);
          sglVertex2f(18.0F, -106.0F);
          sglEnd();
        }
      }

      /* Object: B5, Type: container, OID: 00561f7a-f561-4e1b-95c4-3c6935fb181e */
      {

        /* Object: B5_1, Type: rectangle, OID: b306478e-67d0-4577-a478-ee6c2da11cbd */
        {
          /* filled object part */
          sglIndexColori(6L);
          sglBegin(SGL_POLYGON);
          sglVertex2f(18.0F, -106.0F);
          sglVertex2f(54.0F, -106.0F);
          sglVertex2f(54.0F, -142.0F);
          sglVertex2f(18.0F, -142.0F);
          sglEnd();
          /* outlined object part */
          sglIndexColori(7L);
          sglBegin(SGL_LINE_LOOP);
          sglVertex2f(18.0F, -106.0F);
          sglVertex2f(54.0F, -106.0F);
          sglVertex2f(54.0F, -142.0F);
          sglVertex2f(18.0F, -142.0F);
          sglEnd();
        }

        /* Object: TR_border_2, Type: line, OID: 2b422b00-fb2d-4933-9eb3-19c44c0a307a */
        {
          /* outlined object part */
          sglIndexColori(2L);
          sglBegin(SGL_LINE_STRIP);
          sglVertex2f(18.0F, -142.0F);
          sglVertex2f(18.0F, -106.0F);
          sglVertex2f(54.0F, -106.0F);
          sglEnd();
        }
      }

      /* Object: B6, Type: container, OID: 2c981116-7525-4346-8ca0-045f72206896 */
      {

        /* Object: B6_1, Type: rectangle, OID: ce56beb1-e40c-4ac7-9c00-c22dc89e9b38 */
        {
          /* filled object part */
          sglIndexColori(6L);
          sglBegin(SGL_POLYGON);
          sglVertex2f(-132.0F, -106.0F);
          sglVertex2f(-96.0F, -106.0F);
          sglVertex2f(-96.0F, -142.0F);
          sglVertex2f(-132.0F, -142.0F);
          sglEnd();
          /* outlined object part */
          sglIndexColori(7L);
          sglBegin(SGL_LINE_LOOP);
          sglVertex2f(-132.0F, -106.0F);
          sglVertex2f(-96.0F, -106.0F);
          sglVertex2f(-96.0F, -142.0F);
          sglVertex2f(-132.0F, -142.0F);
          sglEnd();
        }

        /* Object: TR_border_3, Type: line, OID: 0c0bc1a0-4dd5-481b-b427-e3e7976c62f6 */
        {
          /* outlined object part */
          sglIndexColori(2L);
          sglBegin(SGL_LINE_STRIP);
          sglVertex2f(-132.0F, -142.0F);
          sglVertex2f(-132.0F, -106.0F);
          sglVertex2f(-96.0F, -106.0F);
          sglEnd();
        }

        /* Object: bi_font, Type: bifont, OID: a6bbca6e-f902-4f79-8bab-ec716191c929 */
        {
          if (SGLfloat_gt(aol_B_G_Vrelease(pContext), 0.0F)) {
            sglIndexColori(4L);
            sglIndexFontLineWidthi(2L);
            sglIndexFonti(0L);
            sglSetTextAlignment(SGL_ALIGN_CENTER, SGL_ALIGN_MIDDLE);
            sglSetSecondFontAttributes(4L, 0L, 2L);
            {
              sgl_numeric_format _lFormat;
              _lFormat.l_integralPart = 3L;
              _lFormat.l_fractionalPart = 0L;
              _lFormat.l_secondFontPos = 0L;
              _lFormat.b_separator = 46U;
              _lFormat.b_leadingZeros = SGL_FALSE;
              _lFormat.l_displaySign = SGL_SIGN_NEVER;
              sgluWriteFloat(-114.0F, -124.0F, aol_B_G_Vrelease(pContext), &_lFormat);
            }
          }
        }
      }

      /* Object: B7, Type: container, OID: 1954227f-9e4d-47ca-bf22-06373c7bcf22 */
      {

        /* Object: B7_1, Type: rectangle, OID: 75864313-1eaf-40bc-accf-12239635d280 */
        {
          /* filled object part */
          sglIndexColori(6L);
          sglBegin(SGL_POLYGON);
          sglVertex2f(96.0F, -106.0F);
          sglVertex2f(132.0F, -106.0F);
          sglVertex2f(132.0F, -142.0F);
          sglVertex2f(96.0F, -142.0F);
          sglEnd();
          /* outlined object part */
          sglIndexColori(7L);
          sglBegin(SGL_LINE_LOOP);
          sglVertex2f(96.0F, -106.0F);
          sglVertex2f(132.0F, -106.0F);
          sglVertex2f(132.0F, -142.0F);
          sglVertex2f(96.0F, -142.0F);
          sglEnd();
        }

        /* Object: line_2, Type: line, OID: f80cbb47-b736-489c-95df-6910e5cf0c14 */
        {
          /* outlined object part */
          sglIndexColori(2L);
          sglBegin(SGL_LINE_STRIP);
          sglVertex2f(96.0F, -142.0F);
          sglVertex2f(96.0F, -106.0F);
          sglVertex2f(132.0F, -106.0F);
          sglEnd();
        }

        /* Object: ModeSymbols, Type: referenceContainer, OID: 6a576a32-34ef-4f16-b7ab-de02bcc26bcd */
        {
          if (aol_B_G_ModeSymbolVisibility(pContext)) {
            sglPushMatrixAndTranslate(114.0F, -124.0F);
            {
              aol_typ_ModeSymbols _lSubContextVar;
              aol_typ_ModeSymbols *_lSubContext = &_lSubContextVar;
              aol_ModeSymbols_init(_lSubContext);
              aol_ModeSymbols_S_ModeSymbol(_lSubContext, aol_B_G_ModeSymbol(pContext));
              _lSubContext->_parentPriority = pContext->_parentPriority;
              aol_ModeSymbols_draw(_lSubContext, pPriority);
            }
            sglPopMatrixAndTranslate();
          }
        }
      }

      /* Object: rectangle_area, Type: rectangleArea, OID: 0cd6875e-810d-46d1-8db5-9a7b6c1b52d2 */
      {
        SGLfloat _lX = 0.0F;
        SGLfloat _lY = 0.0F;
        aol_locate(-1L, &_lX, &_lY);
        aol_B_G_OverB(pContext) = sglRectangleActiveAreaGetStatus(_lX, _lY, -140.0F, 150.0F, 140.0F, -150.0F);
      }
    }
  }
}


/*********************************************************
 ** End of file
 ** End of generation: 2017-05-30T13:27:23
 *********************************************************/

