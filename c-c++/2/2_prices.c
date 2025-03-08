/*
 * Shopping cart program to calculate total purchase price.
 * This program simulates a shopping cart where users can enter the price of items they are purchasing.
 * It continues to prompt for item prices until the user enters 0, at which point it prints the number of items purchased, the subtotal, the sales tax, and the total amount due.
 *
 * The program features:
 * - Input of item prices from the user.
 * - Validation to ensure prices are non-negative.
 * - Accumulation of the total purchase amount.
 * - Calculation of a 7.5% sales tax.
 * - Display of the number of items, subtotal, sales tax, and total amount due.
 *
 * - Entering a negative price will prompt an error message without affecting the subtotal.
 * - The sales tax rate is fixed at 7.5%.
 * 
 * Siddharth Ghosh - Jun 24, 2024
 */


#include <stdio.h>

int main (void) {
	_Bool finished = 1;
	float sub_total_price = 0;
	int num_item = 0;
	while (finished) {
		float item;
		printf("Enter price (without dollar sign) or 0 to quit: $");
		scanf("%f", &item);
		if (item > 0) {
			sub_total_price = sub_total_price + item;
			num_item++;
		}
		if (item < 0) {
			printf("Price cannot be negative\n");
		}
		if (item == 0) {
			printf("Number of items purchased = %i\n", num_item);
			printf("Subtotal = $%.2f\n", sub_total_price);
			printf("Sales tax 7.5%% = $%.2f\n", (sub_total_price * 0.075));
			printf("Total = $%.2f\n", (sub_total_price + (sub_total_price * 0.075)));
			finished = 0;
		}
	}
}
