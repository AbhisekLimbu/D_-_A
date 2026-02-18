#include <stdio.h>

int get_min(int* arr, int sz){
	int small_value = 10000000;
	for(int i = 0; i < sz; i++){
		if(arr[i] < small_value){
		
			small_value = arr[i];
		}
	}	
	return small_value;
}


int main(){

	int arr[5] = {10, 12, 2, 4, 20};
	printf("%d", get_min(arr, 5));
	return 0;

}
