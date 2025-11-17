#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define BUFFER_SIZE 3

static size_t count;
bool is_full(size_t count){
	return BUFFER_SIZE <= count;
}


int insert(int* ptr, int num){
	if (is_full(count)){
		printf("Cannot insert more iterms, buffer_size <");
		exit(1);
	}
	int* pointer = ptr;
	*(pointer+count) = num;	
	count++;
	return count;
}

int get_idx(int* ptr, int num){
	int* start = ptr;
	int* end = ptr+count;
	while(start < end){
		if( *start == num){
			return (int) (start - ptr);
		}
		start++;
	}
	return -1;
}

int main(){
	int list[BUFFER_SIZE]; 
	int* ptr = list; // list decaying into pointer
	insert(ptr, 10);
	insert(ptr, 20);
	insert(ptr, 30);
	printf("the index of num %d\n", get_idx(ptr, 20));
	return 0;
}
