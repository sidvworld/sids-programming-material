/* This program initializes two variables
 * Using these two variables, it declares 5 other variables of sum, difference, product, quotient, and remainder
 * The 5 variables are then printed
 *
 * Siddharth Ghosh Jun 19, 2024
 * */

#include <stdio.h>

int main(void){
	int num1 = 4;
	int num2 = 2;
	
	int sum = num1 + num2;
	int difference = num1 - num2;
	int product = num1 * num2;
	int quotient = num1 / num2;
	int remainder = num1 % num2; 
	
	printf("Sum = %i\n", sum);
	printf("Difference = %i\n", difference);
	printf("Product = %i\n", product);
	printf("Quotient = %i\n", quotient);
	printf("Remainder = %i\n", remainder);
	
