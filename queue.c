#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	x->count++;

}

// 
//int dequeue_t(){
//	
//}


int main(){
	queue_t my_queue;
	queue_t *ptr = &my_queue;
	init_queue(ptr, 6);
	enqueue_t(ptr, 10);
	printf("%d\n", ptr->d_block[0]);

	free(ptr->d_block);
	return 0;
}

 
