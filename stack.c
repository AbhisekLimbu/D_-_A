#include <stdio.h>
#include <stdlib.h>


typedef struct{
	int* top;
	int* bottom;
	int* data;
        size_t size;
	size_t count;

}my_stack_t;

void make_v(my_stack_t *ptr, size_t size ){
	ptr -> data = (int*) malloc (sizeof(int) * size);
	if( !ptr -> data ){
		printf("sterr: memory allocation failed :(");
		exit(1);
	}
	ptr-> size = size;
	ptr -> top = ptr -> data;
	ptr -> count = 0;
	ptr -> bottom = ptr -> data;
	ptr -> top = ptr -> bottom; // empty : top = bottom
}


void push(){
	
}

int main()
{
	my_stack_t my_stack;
	my_stack_t* ptr = &my_stack;
	make_v(ptr, 2);
	ptr -> data[0] = 10;
	ptr -> size = 2;
	ptr -> data[1] = 4;
	printf("First: %d\n", ptr -> data[0]);
	printf("second: %d\n", ptr -> data[1]);


	free( ptr -> data);
	ptr -> data = NULL;
	return 0;
}
