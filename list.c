#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define BUFFER_SIZE 20

static size_t count;
bool is_full(void){
	return BUFFER_SIZE <= count;
}

int insert(int* ptr, int num){
	if (is_full()){
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

void delete(int* p, int num){
	int* start = p;
	int* end = p+count;
	while( *start != num){
		start++;
	}
	for(int* n_start = start; n_start + 1 < end; n_start++){
		*n_start = *(n_start+1);
	}
	count--;
}

void print_f(int* x){
	int* end = x + count;
	while(x < end){
		printf("%d\n", *(x));
		x++;
	}
	printf("\n");
}

void fill_list(int* l){
	for(int i = 0; i < BUFFER_SIZE; i++){
		l[i]= i;
	}
	count = BUFFER_SIZE;
}
void replace(int* pro, int target, int num){
	int* end = pro + count;
	while(pro < end){
		if(*pro == target){
			*pro = num;
			pro++;
		}
		pro++;
	}
}


int main(){
	int list[BUFFER_SIZE]; 
	int* ptr = list; // list decaying into pointer
 	fill_list(ptr);	
	int idx = get_idx(ptr, 10);
	if(idx == -1){
		printf("not found");
	}
	//printf("the index of num 20 is %d\n", idx);
	replace(ptr, 10, 100);
	print_f(ptr);

	return 0;
}
