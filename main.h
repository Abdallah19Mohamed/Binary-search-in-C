#ifndef MAIN_H
#define MAIN_H
	
	#include <stdio.h>
	
	#include <stdlib.h>
	#include "STD_DataTypes.h"
	
	
	#include "binary.h"
	#ifndef NULL
	#define NULL ((void *)0)
	#endif
	#define PRINT_U32(n) printf(#n " = %lu\n",n)
	#define PRINT_S32(n) printf(#n " = %ld\n",n)
	#define PRINT_U16(n) printf(#n " = %hu\n",n)
	#define PRINT_S16(n) printf(#n " = %hd\n",n)
	#define ARR_SIZE(x) ((int)sizeof(x)/sizeof(x[0]))
	#define PRINT_SIZE(x) printf("size of " #x " = %lu\n",sizeof(x))
	void printMax(s32 arr[],u16 size);
	
	
#endif