#ifndef _TEST_DMI_MACRO_H_
#define _TEST_DMI_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file Test_DMI_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "Test_DMI.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_Test_DMI SAO_CTX_inC_Test_DMI;
    outC_Test_DMI SAO_CTX_outC_Test_DMI;
} WU_Test_DMI;
#define WU_CTX_TYPE_Test_DMI WU_Test_DMI
#define WU_CTX_TYPE_Test_DMI_SIZE sizeof(WU_Test_DMI)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_Test_DMI() 

#define DECLARE_EXT_SENSORS_Test_DMI(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_Test_DMI_RP_SpeedTarget(context) context.SAO_CTX_inC_Test_DMI.RP_SpeedTarget  /* Test_DMI/RP_SpeedTarget */
#define VAR_Test_DMI_RP_SpeedTarget VARC_Test_DMI_RP_SpeedTarget(CTX_Test_DMI)

#define VARC_Test_DMI_RP_SpeedPermitted(context) context.SAO_CTX_inC_Test_DMI.RP_SpeedPermitted  /* Test_DMI/RP_SpeedPermitted */
#define VAR_Test_DMI_RP_SpeedPermitted VARC_Test_DMI_RP_SpeedPermitted(CTX_Test_DMI)

#define VARC_Test_DMI_RP_SpeedRelease(context) context.SAO_CTX_inC_Test_DMI.RP_SpeedRelease  /* Test_DMI/RP_SpeedRelease */
#define VAR_Test_DMI_RP_SpeedRelease VARC_Test_DMI_RP_SpeedRelease(CTX_Test_DMI)

#define VARC_Test_DMI_OverA(context) context.SAO_CTX_inC_Test_DMI.OverA  /* Test_DMI/OverA */
#define VAR_Test_DMI_OverA VARC_Test_DMI_OverA(CTX_Test_DMI)

#define VARC_Test_DMI_MousePressed(context) context.SAO_CTX_inC_Test_DMI.MousePressed  /* Test_DMI/MousePressed */
#define VAR_Test_DMI_MousePressed VARC_Test_DMI_MousePressed(CTX_Test_DMI)

#define VARC_Test_DMI_VisibleGradients(context) context.SAO_CTX_inC_Test_DMI.VisibleGradients  /* Test_DMI/VisibleGradients */
#define VAR_Test_DMI_VisibleGradients VARC_Test_DMI_VisibleGradients(CTX_Test_DMI)

#define VARC_Test_DMI_Brake(context) context.SAO_CTX_inC_Test_DMI.Brake  /* Test_DMI/Brake */
#define VAR_Test_DMI_Brake VARC_Test_DMI_Brake(CTX_Test_DMI)

#define VARC_Test_DMI_lala(context) context.SAO_CTX_inC_Test_DMI.lala  /* Test_DMI/lala */
#define VAR_Test_DMI_lala VARC_Test_DMI_lala(CTX_Test_DMI)

#define VARC_Test_DMI_insideButton(context) context.SAO_CTX_inC_Test_DMI.insideButton  /* Test_DMI/insideButton */
#define VAR_Test_DMI_insideButton VARC_Test_DMI_insideButton(CTX_Test_DMI)

#define VARC_Test_DMI_arraykey(context) context.SAO_CTX_inC_Test_DMI.arraykey  /* Test_DMI/arraykey */
#define VAR_Test_DMI_arraykey VARC_Test_DMI_arraykey(CTX_Test_DMI)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_Test_DMI_TrainPosition(context) context.SAO_CTX_outC_Test_DMI.TrainPosition  /* Test_DMI/TrainPosition */
#define VAR_Test_DMI_TrainPosition VARC_Test_DMI_TrainPosition(CTX_Test_DMI)

#define VARC_Test_DMI_TrainSpeed(context) context.SAO_CTX_outC_Test_DMI.TrainSpeed  /* Test_DMI/TrainSpeed */
#define VAR_Test_DMI_TrainSpeed VARC_Test_DMI_TrainSpeed(CTX_Test_DMI)

#define VARC_Test_DMI_SpeedDigitOne(context) context.SAO_CTX_outC_Test_DMI.SpeedDigitOne  /* Test_DMI/SpeedDigitOne */
#define VAR_Test_DMI_SpeedDigitOne VARC_Test_DMI_SpeedDigitOne(CTX_Test_DMI)

#define VARC_Test_DMI_SpeedDigitTwo(context) context.SAO_CTX_outC_Test_DMI.SpeedDigitTwo  /* Test_DMI/SpeedDigitTwo */
#define VAR_Test_DMI_SpeedDigitTwo VARC_Test_DMI_SpeedDigitTwo(CTX_Test_DMI)

#define VARC_Test_DMI_SpeedDigitThree(context) context.SAO_CTX_outC_Test_DMI.SpeedDigitThree  /* Test_DMI/SpeedDigitThree */
#define VAR_Test_DMI_SpeedDigitThree VARC_Test_DMI_SpeedDigitThree(CTX_Test_DMI)

#define VARC_Test_DMI_SpeedTarget(context) context.SAO_CTX_outC_Test_DMI.SpeedTarget  /* Test_DMI/SpeedTarget */
#define VAR_Test_DMI_SpeedTarget VARC_Test_DMI_SpeedTarget(CTX_Test_DMI)

#define VARC_Test_DMI_SpeedPermitted(context) context.SAO_CTX_outC_Test_DMI.SpeedPermitted  /* Test_DMI/SpeedPermitted */
#define VAR_Test_DMI_SpeedPermitted VARC_Test_DMI_SpeedPermitted(CTX_Test_DMI)

#define VARC_Test_DMI_SpeedRelease(context) context.SAO_CTX_outC_Test_DMI.SpeedRelease  /* Test_DMI/SpeedRelease */
#define VAR_Test_DMI_SpeedRelease VARC_Test_DMI_SpeedRelease(CTX_Test_DMI)

#define VARC_Test_DMI_GradientsStart(context) context.SAO_CTX_outC_Test_DMI.GradientsStart  /* Test_DMI/GradientsStart */
#define VAR_Test_DMI_GradientsStart VARC_Test_DMI_GradientsStart(CTX_Test_DMI)

#define VARC_Test_DMI_GradientsEnd(context) context.SAO_CTX_outC_Test_DMI.GradientsEnd  /* Test_DMI/GradientsEnd */
#define VAR_Test_DMI_GradientsEnd VARC_Test_DMI_GradientsEnd(CTX_Test_DMI)

#define VARC_Test_DMI_GradientsValue(context) context.SAO_CTX_outC_Test_DMI.GradientsValue  /* Test_DMI/GradientsValue */
#define VAR_Test_DMI_GradientsValue VARC_Test_DMI_GradientsValue(CTX_Test_DMI)

#define VARC_Test_DMI_DistanceToTarget(context) context.SAO_CTX_outC_Test_DMI.DistanceToTarget  /* Test_DMI/DistanceToTarget */
#define VAR_Test_DMI_DistanceToTarget VARC_Test_DMI_DistanceToTarget(CTX_Test_DMI)

#define VARC_Test_DMI_DistanceToTargetVisible(context) context.SAO_CTX_outC_Test_DMI.DistanceToTargetVisible  /* Test_DMI/DistanceToTargetVisible */
#define VAR_Test_DMI_DistanceToTargetVisible VARC_Test_DMI_DistanceToTargetVisible(CTX_Test_DMI)

#define VARC_Test_DMI_InterpolatedDistanceToTarget(context) context.SAO_CTX_outC_Test_DMI.InterpolatedDistanceToTarget  /* Test_DMI/InterpolatedDistanceToTarget */
#define VAR_Test_DMI_InterpolatedDistanceToTarget VARC_Test_DMI_InterpolatedDistanceToTarget(CTX_Test_DMI)

#define VARC_Test_DMI_StatusSymbolBrake(context) context.SAO_CTX_outC_Test_DMI.StatusSymbolBrake  /* Test_DMI/StatusSymbolBrake */
#define VAR_Test_DMI_StatusSymbolBrake VARC_Test_DMI_StatusSymbolBrake(CTX_Test_DMI)

#define VARC_Test_DMI_PointerColor(context) context.SAO_CTX_outC_Test_DMI.PointerColor  /* Test_DMI/PointerColor */
#define VAR_Test_DMI_PointerColor VARC_Test_DMI_PointerColor(CTX_Test_DMI)

#define VARC_Test_DMI_showlala(context) context.SAO_CTX_outC_Test_DMI.showlala  /* Test_DMI/showlala */
#define VAR_Test_DMI_showlala VARC_Test_DMI_showlala(CTX_Test_DMI)

#define VARC_Test_DMI_digit1_view(context) context.SAO_CTX_outC_Test_DMI.digit1_view  /* Test_DMI/digit1_view */
#define VAR_Test_DMI_digit1_view VARC_Test_DMI_digit1_view(CTX_Test_DMI)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_RP_SpeedTarget kcg_real
#define CPY_RP_SpeedTarget(DST, SRC) DST = SRC
#define T_RP_SpeedPermitted kcg_real
#define CPY_RP_SpeedPermitted(DST, SRC) DST = SRC
#define T_RP_SpeedRelease kcg_real
#define CPY_RP_SpeedRelease(DST, SRC) DST = SRC
#define T_OverA kcg_bool
#define CPY_OverA(DST, SRC) DST = SRC
#define T_MousePressed kcg_bool
#define CPY_MousePressed(DST, SRC) DST = SRC
#define T_VisibleGradients array_bool_12
#define CPY_VisibleGradients(DST, SRC) kcg_copy_array_bool_12(DST, SRC)
#define T_Brake kcg_real
#define CPY_Brake(DST, SRC) DST = SRC
#define T_lala kcg_bool
#define CPY_lala(DST, SRC) DST = SRC
#define T_insideButton kcg_bool
#define CPY_insideButton(DST, SRC) DST = SRC
#define T_arraykey array_bool_12
#define CPY_arraykey(DST, SRC) kcg_copy_array_bool_12(DST, SRC)
#define T_TrainPosition kcg_real
#define CPY_TrainPosition(DST, SRC) DST = SRC
#define T_TrainSpeed kcg_real
#define CPY_TrainSpeed(DST, SRC) DST = SRC
#define T_SpeedDigitOne kcg_real
#define CPY_SpeedDigitOne(DST, SRC) DST = SRC
#define T_SpeedDigitTwo kcg_real
#define CPY_SpeedDigitTwo(DST, SRC) DST = SRC
#define T_SpeedDigitThree kcg_real
#define CPY_SpeedDigitThree(DST, SRC) DST = SRC
#define T_SpeedTarget kcg_real
#define CPY_SpeedTarget(DST, SRC) DST = SRC
#define T_SpeedPermitted kcg_real
#define CPY_SpeedPermitted(DST, SRC) DST = SRC
#define T_SpeedRelease kcg_real
#define CPY_SpeedRelease(DST, SRC) DST = SRC
#define T_GradientsStart array_real_12
#define CPY_GradientsStart(DST, SRC) kcg_copy_array_real_12(DST, SRC)
#define T_GradientsEnd array_real_12
#define CPY_GradientsEnd(DST, SRC) kcg_copy_array_real_12(DST, SRC)
#define T_GradientsValue array_real_12
#define CPY_GradientsValue(DST, SRC) kcg_copy_array_real_12(DST, SRC)
#define T_DistanceToTarget kcg_real
#define CPY_DistanceToTarget(DST, SRC) DST = SRC
#define T_DistanceToTargetVisible kcg_bool
#define CPY_DistanceToTargetVisible(DST, SRC) DST = SRC
#define T_InterpolatedDistanceToTarget kcg_real
#define CPY_InterpolatedDistanceToTarget(DST, SRC) DST = SRC
#define T_StatusSymbolBrake kcg_bool
#define CPY_StatusSymbolBrake(DST, SRC) DST = SRC
#define T_PointerColor kcg_int
#define CPY_PointerColor(DST, SRC) DST = SRC
#define T_showlala kcg_bool
#define CPY_showlala(DST, SRC) DST = SRC
#define T_digit1_view array_int_1
#define CPY_digit1_view(DST, SRC) kcg_copy_array_int_1(DST, SRC)


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_Test_DMI(context)  WU_Test_DMI context;

#define DECLARE_CTXT_Test_DMI() DECLAREC_CTXT_Test_DMI(CTX_Test_DMI)

#define DECLAREC_EXT_CTXT_Test_DMI(MODE , context) MODE WU_Test_DMI context;

#define DECLARE_EXT_CTXT_Test_DMI(MODE) DECLAREC_EXT_CTXT_Test_DMI(MODE , CTX_Test_DMI)

#define INITC_Test_DMI(context) Test_DMI_init(&context.SAO_CTX_outC_Test_DMI);Test_DMI_reset(&context.SAO_CTX_outC_Test_DMI)
#define INIT_Test_DMI() INITC_Test_DMI(CTX_Test_DMI)

#define PERFORMC_Test_DMI(context) 	Test_DMI( \
		&context.SAO_CTX_inC_Test_DMI /* input context */,\
		&context.SAO_CTX_outC_Test_DMI /* output/memories context */\
	)

#define PERFORM_Test_DMI() PERFORMC_Test_DMI(CTX_Test_DMI)

/*$************** SCADE Macro wrapper *********************
** End of file Test_DMI_macro.h
***********************************************************$*/

#endif /* _TEST_DMI_MACRO_H_ */
