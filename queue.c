#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMIT 5	

typedef struct{
	int* head;
	int* tail;
	int* d_block;
	size_t size;
	int count;
}queue_t;
 
void init_queue(queue_t* x, size_t cap_t){
	x -> size = cap_t;
	x->d_block = malloc(sizeof(int) * cap_t);
	if(!x->d_block){
		printf("FAILED ALLOCATING MEMORY:\n");
		exit(1);
	}
	x->head = x->d_block;
	x->tail = x->d_block;
	x->count = 0;
}


void enqueue_t(queue_t* x, int num)
{
	if(x->count == x->size){
		printf("queue over flow");
		exit(1);
	}
	*(x->head) = num;
	x->head++; // has to advance the pointer
	x->count++;

}

void dequeue_t(queue_t* x){
	if(x-> head == x->tail){
		printf("two pointer at the same mem loc: or zero \n");
		exit(1);
	}
	*(x->head) = 0;
	x->head--;
}

void print_q(queue_t* data_m){
	int* ptr_i = data_m->tail;
	while(ptr_i < data_m->head){
		printf("%d\n", *ptr_i++);
	
	}
}

int main(){
	queue_t my_queue;
	queue_t *ptr = &my_queue;
	init_queue(ptr, LIMIT);
	// enquining
	for(int i = 0; i < LIMIT; i++){
		enqueue_t(ptr, i);
	}
	//printing
	//for(int i = 0; i < ptr->head; i++){
	//	queue_t* iter_ptr = ptr->d_block;
	//	printf("%d\n", *(itr_ptr(i));
	//
	//}
	print_q(ptr);
	dequeue_t(ptr);
	dequeue_t(ptr);
	printf("--------after dequeeing-------\n");
	print_q(ptr);
	free(ptr->d_block);
	return 0;
}

 
