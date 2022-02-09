#include "main.h"
#ifndef ARR_MAX_SIZE
#define ARR_MAX_SIZE 10
#endif


int main(void){
	
	s32 data[ARR_MAX_SIZE] = {-5,-2,5,7,8,10,12,15,16,17};
	u32 index;
	s32 num;
	states_t ret;
	while(1){
		printf("search for : ");
		scanf("%lu",&num);
		ret = binarySearch(data,0,ARR_MAX_SIZE-1,&index,num);
	
	}
	
	

	return 0;
}
