#include "binary.h"

states_t binarySearch(s32 *arr,s32 first,s32 last,u32* FoundIndex,s32 search){
	states_t retVal;
	if(NULL == arr){
		printf("arr = NULL\n");
		return RET_NULL_PTR;
		
	}else if(first>last){
		printf("NOT Found\n");
		return RET_N_OK;
	}else{
		s32 middle = (last+first)/2;
		if(arr[middle] == search){
			*FoundIndex=middle;
			printf("Found at index = %d\n",*FoundIndex);
			return RET_OK;
		}else if(arr[middle] < search){
			binarySearch(arr,middle+1,last,FoundIndex,search);
		}else if(arr[middle] > search){
			binarySearch(arr,first,middle-1,FoundIndex,search);
		}
	}
}