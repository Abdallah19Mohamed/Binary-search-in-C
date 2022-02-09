#ifndef BINARY_H
#define BINARY_H

#include <stdio.h>
#include "STD_DataTypes.h"
#ifndef ARR_MAX_SIZE
#define ARR_MAX_SIZE 10
#endif

typedef enum{
	RET_OK,
	RET_N_OK,
	RET_NULL_PTR
} states_t;

states_t binarySearch(s32 *arr,s32 first,s32 last,u32* FoundIndex,s32 search);
#endif
