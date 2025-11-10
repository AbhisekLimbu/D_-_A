#include <stdio.h>
#include <stdlib.h>
#define LIMIT 10

typedef struct{
	int* top;
	int* bottom;
	int* data;
        size_t size;
	size_t count;

}my_stack_t;

void stack_init(my_stack_t *ptr, size_t size ){
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
	return;			   
}

void stack_push(my_stack_t* x, int num){
	if( (x -> top - x -> bottom) ==  x -> size){
	printf("stack overflow\n"); exit(1);
	};
	*(x -> top++) = num;
	return;
	}
void stack_pop(my_stack_t* x){
	if( x -> top == x -> bottom){
	printf("stack under flow \n"); exit(1);
	};
	*(x -> top) = 0;
	--x -> top;

}

int print_stack(my_stack_t* ptr){
	int* p =  ptr -> bottom;
	while( p < ptr -> top){
		printf("%d\n ", *p);
		p++;
	}
	return *p;
}

int peek_s(my_stack_t* ptr){	
	if(ptr -> top == ptr -> bottom)
	{
			printf("stderr, zeo elemetn");
		exit(1);
	};
	return *(ptr->top);


}

int main()
{
	my_stack_t my_stack;
	my_stack_t* ptr = &my_stack;
	stack_init(ptr, LIMIT);

	//for ( int i = 0; i < LIMIT ; i++){
	//	stack_push(ptr, i);
	//
	//}
	//printf("First: %d\n", ptr -> data[0]);
	//printf("second: %d\n", ptr -> data[1]);
	//stack_pop(ptr);
	//print_stack(ptr);	
	int result = peek_s(ptr);
	printf("%d\n", result);
	free( ptr -> data);
	ptr -> data = NULL;
	return 0;
}
