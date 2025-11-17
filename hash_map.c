#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char* key;
	int* value;
}data_b;


data_b* init_map(char* key, int* value){
	data_b* entry = (data_b*) malloc(sizeof(data_b));
	*entry->key = *key;
	*entry->value = *value;
	return entry;
}


void insert(){
	 

}

int main(){
	data_b my_map;
	data_b* ptr = &my_map;
	init_map(ptr);


	return 0;
}
