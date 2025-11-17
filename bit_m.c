#include <stdio.h>
#include <stdint.h>


int main(){
	uint8_t flag = 0;
	uint8_t run = (1<<3);
	uint8_t turn_on = ( 1 << 4 );
	flag |= run;
	flag |= turn_on;
	if( flag & run){
		printf("yes\n");
	}
	else{
		printf("nope\n");
	}
	return 0;
}
