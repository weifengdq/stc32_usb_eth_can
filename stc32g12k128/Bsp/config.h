#ifndef		__CONFIG_H__
#define		__CONFIG_H__

#define MAIN_Fosc		35000000L
#define	TRUE	1
#define	FALSE	0
#define	NULL	0
#define ENABLE		1
#define DISABLE		0
#define SUCCESS		0
#define FAIL		-1
#define	Priority_0			0   //lowest
#define	Priority_1			1
#define	Priority_2			2
#define	Priority_3			3   //highest

typedef unsigned char   u8;     //  8 bits 
typedef unsigned int    u16;    // 16 bits 
typedef unsigned long   u32;    // 32 bits 

typedef signed char     int8;   //  8 bits 
typedef signed int      int16;  // 16 bits 
typedef signed long     int32;  // 32 bits 

typedef unsigned char   uint8;  //  8 bits 
typedef unsigned int    uint16; // 16 bits 
typedef unsigned long   uint32; // 32 bits 

#define uint8_t     unsigned char
#define uint16_t    unsigned int
#define uint32_t    unsigned long
 
#define int8_t      signed char
#define int16_t     signed int
#define int32_t     signed long

#include "stc32g.h"
#include <stdlib.h>
#include <stdio.h>

#endif
