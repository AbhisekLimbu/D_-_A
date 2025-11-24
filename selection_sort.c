#include <stdio.h>
#include <stdlib.h>


void s_sort(int* ptr, int n){
	
	for(int i = 0; i < n-1; i++){
		int *min_ptr = ptr + 1;
		for( int j = i+1; j < n; j++){
			int* curr_ptr = ptr + j	; 
			if(*curr_ptr < *min_ptr){
				min_ptr = curr_ptr;
			}
		int temp = *min_ptr;
		*min_ptr = *(ptr + i);
		*(ptr + i) = temp;			
		}
	} 

}

int main(){

	int arr[] = {20, 10, 30, 40, 10};
	int size = sizeof(arr)/sizeof(arr[0]);
	s_sort(arr, size);
	printf("sorted array: \n");
	for(int i = 0; i < size; i++){
		printf("%d\n", *(arr+i));
	
	}
	return 0;
}
