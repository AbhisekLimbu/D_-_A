#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
	int data;
	struct node* next;
};

void print_l(struct node* head){
	struct node* temp = head;
	while(temp != NULL){
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}

int main(void){
	struct node n1, n2, n3;
	n1.next = &n2;	
	n2.next = &n3;
	n3.next = NULL;

	n1.data = 10;
	n2.data = 20;
	n3.data = 30;
	print_l(&n1);

	return 0;
}
