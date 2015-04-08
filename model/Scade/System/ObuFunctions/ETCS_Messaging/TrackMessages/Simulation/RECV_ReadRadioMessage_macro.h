#ifndef _RECV_READRADIOMESSAGE_MACRO_H_
#define _RECV_READRADIOMESSAGE_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file RECV_ReadRadioMessage_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "RECV_ReadRadioMessage.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_RECV_ReadRadioMessage SAO_CTX_inC_RECV_ReadRadioMessage;
    outC_RECV_ReadRadioMessage SAO_CTX_outC_RECV_ReadRadioMessage;
} WU_RECV_ReadRadioMessage;
#define WU_CTX_TYPE_RECV_ReadRadioMessage WU_RECV_ReadRadioMessage
#define WU_CTX_TYPE_RECV_ReadRadioMessage_SIZE sizeof(WU_RECV_ReadRadioMessage)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_RECV_ReadRadioMessage() 

#define DECLARE_EXT_SENSORS_RECV_ReadRadioMessage(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_RECV_ReadRadioMessage_Packets(context) context.SAO_CTX_inC_RECV_ReadRadioMessage.Packets  /* RECV_ReadRadioMessage/Packets */
#define VAR_RECV_ReadRadioMessage_Packets VARC_RECV_ReadRadioMessage_Packets(CTX_RECV_ReadRadioMessage)

#define VARC_RECV_ReadRadioMessage_PacketID(context) context.SAO_CTX_inC_RECV_ReadRadioMessage.PacketID  /* RECV_ReadRadioMessage/PacketID */
#define VAR_RECV_ReadRadioMessage_PacketID VARC_RECV_ReadRadioMessage_PacketID(CTX_RECV_ReadRadioMessage)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_RECV_ReadRadioMessage_Data(context) context.SAO_CTX_outC_RECV_ReadRadioMessage.Data  /* RECV_ReadRadioMessage/Data */
#define VAR_RECV_ReadRadioMessage_Data VARC_RECV_ReadRadioMessage_Data(CTX_RECV_ReadRadioMessage)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_Packets CompressedRadioPackets
#define CPY_Packets(DST, SRC) kcg_copy_CompressedRadioPackets(DST, SRC)
#define T_PacketID kcg_int
#define CPY_PacketID(DST, SRC) DST = SRC
#define T_Data array_int_500
#define CPY_Data(DST, SRC) kcg_copy_array_int_500(DST, SRC)


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_RECV_ReadRadioMessage(context)  WU_RECV_ReadRadioMessage context;

#define DECLARE_CTXT_RECV_ReadRadioMessage() DECLAREC_CTXT_RECV_ReadRadioMessage(CTX_RECV_ReadRadioMessage)

#define DECLAREC_EXT_CTXT_RECV_ReadRadioMessage(MODE , context) MODE WU_RECV_ReadRadioMessage context;

#define DECLARE_EXT_CTXT_RECV_ReadRadioMessage(MODE) DECLAREC_EXT_CTXT_RECV_ReadRadioMessage(MODE , CTX_RECV_ReadRadioMessage)

#define INITC_RECV_ReadRadioMessage(context) RECV_ReadRadioMessage_reset(&context.SAO_CTX_outC_RECV_ReadRadioMessage)
#define INIT_RECV_ReadRadioMessage() INITC_RECV_ReadRadioMessage(CTX_RECV_ReadRadioMessage)

#define PERFORMC_RECV_ReadRadioMessage(context) 	RECV_ReadRadioMessage( \
		&context.SAO_CTX_inC_RECV_ReadRadioMessage /* input context */,\
		&context.SAO_CTX_outC_RECV_ReadRadioMessage /* output/memories context */\
	)

#define PERFORM_RECV_ReadRadioMessage() PERFORMC_RECV_ReadRadioMessage(CTX_RECV_ReadRadioMessage)

/*$************** SCADE Macro wrapper *********************
** End of file RECV_ReadRadioMessage_macro.h
***********************************************************$*/

#endif /* _RECV_READRADIOMESSAGE_MACRO_H_ */
