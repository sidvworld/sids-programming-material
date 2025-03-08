#include <stdio.h>

void cube (double *number){
	*number = (*number) * (*number) * (*number);
	printf("%f", *number);
}

int main (void){
	struct node {
		int value;
		struct node *next;
	};
	
	struct node n1;
	struct node n2;
	struct node n3;
	struct node n_insert;
	
	n1.value = 15;
	n2.value = 25;
	n3.value = 30;
	n_insert.value = 20;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = (void *) 0; // null pointer
	
	// write code to insert n_insert between n1 and n2.

	n_insert.next = &n2;
	n1.next = &n_insert;

	// you can use this for testing.
	// correct output should be 15 20 25 30
	
	struct node *p_node = &n1;
	while (p_node != 0) {
		printf("%d ", p_node->value);
		p_node = p_node->next;
	}
	printf("\n");
}
