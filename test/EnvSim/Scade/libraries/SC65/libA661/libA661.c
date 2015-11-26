
#include "kcg_types.h"

kcg_char OutlineValue_a661_escape(
/* EscapeSequences::OutlineValue::Top */ kcg_bool Top,
/* EscapeSequences::OutlineValue::Bottom */ kcg_bool Bottom,
/* EscapeSequences::OutlineValue::Left */ kcg_bool Left,
/* EscapeSequences::OutlineValue::Right */ kcg_bool Right){
	kcg_char out =48;
	if(Top) out +=1;
	if(Bottom) out +=2;
	if(Left) out +=4;
	if(Right) out +=8;
	
}
