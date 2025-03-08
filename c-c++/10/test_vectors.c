#include <stdio.h>
#include "vector2d.h"

int main (void){
	int choice;
	vec2d v1, v2, result;
	double factor, dot;
	
	do {
		printf("1) Add vectors; 2) Scale vector; 3) Dot product; 4) Exit: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("Enter vector 1 (x, y): ");
				scanf("(%lf, %lf)", &v1.x, &v1.y);
				printf("\n");
				
				printf("Enter vector 2 (x, y): ");
				scanf("(%lf, %lf)", &v1.x, &v1.y);
				printf("\n");
				
				result = add(v1, v2);
				
				printf("Result: ");
				display_vector(result);
				printf("\n");
				
		}
		
	} while(1);
	
	return 0;
}
