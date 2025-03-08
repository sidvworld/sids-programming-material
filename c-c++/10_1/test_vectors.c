/*
 * This program allows the user to perform various operations on 2D vectors.
 * The available operations are:
 * 1. Add two vectors
 * 2. Scale a vector by a given factor
 * 3. Calculate the dot product of two vectors
 * 4. Exit the program
 *
 * The user is prompted to choose an operation, input the necessary vector 
 * values, and the result of the operation is displayed.
 *
 * - The user is prompted with a menu to choose an operation.
 * - For adding vectors and calculating the dot product, the user inputs
 *   two vectors in the form (x, y).
 * - For scaling a vector, the user inputs one vector and a scaling factor.
 * - The result of the operation is then displayed.
 *
 * - The program runs in a loop until the user chooses to exit by selecting
 *   the option 4.
 * - In case of an invalid option, it deafults to an error message displayed.
 *
 * Siddharh Ghosh July 19th
 */ 	

#include <stdio.h>
#include "vector2d.h"

int main (void){
	int choice;
	double factor, dot;
	vec2d result, v1, v2;
	
	printf("Vector Calculator. x y values separated by spaces.\n");
	
	do {
		printf("1) Add vectors; 2) Scale vector; 3) Dot product; 4) Exit: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("Enter vector 1: ");
				scanf("%lf %lf", &v1.x, &v1.y);
				
				printf("Enter vector 2: ");
				scanf("%lf %lf", &v2.x, &v2.y);
				
				result = add(v1, v2);
				
				printf("Result: ");
				display_vector(result);
				printf("\n");
				break;
				
			case 2:
				printf("Enter vector: ");
				scanf("%lf %lf", &v1.x, &v1.y);
				
				printf("Enter scaling factor: ");
				scanf("%lf", &factor);
				
				result = scale(v1, factor);
				
				printf("Result: ");
				display_vector(result);
				printf("\n");
				break;
				
			case 3:
				printf("Enter vector 1: ");
				scanf("%lf %lf", &v1.x, &v1.y);
				
				printf("Enter vector 2: ");
				scanf("%lf %lf", &v2.x, &v2.y);
				
				dot = dot_product(v1, v2);
				
				printf("Result: %f\n", dot);
				break;
				
			case 4:
				printf("Bye!");
				break;
			
			default:
				printf("Error!\n");
				break;
		}
		
	} while(choice != 4);
	
	return 0;
}
