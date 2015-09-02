#ifndef _LIBIMPL_H_
#define _LIBIMPL_H_

/* SCADE imported type definitions */

typedef unsigned char uint8;
typedef char int8;
typedef unsigned short int uint16;
typedef short int int16;
typedef unsigned long int uint32;
typedef long int int32;

void uint8_init(uint8 *var); 
void uint16_init(uint16 *var); 
void uint32_init(uint32 *var); 
void int8_init(int8 *var); 
void int16_init(int16 *var); 
void int32_init(int32 *var); 

#endif /* _LIBIMPL_H_ */
