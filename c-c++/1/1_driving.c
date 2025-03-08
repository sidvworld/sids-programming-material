/* This program calculates the daily cost of using a vehicle.
 * The application includes variables for the following inputs:
 * miles_driven: Total miles driven per day (float).
 * cost_per_gallon: Cost per gallon of gasoline (float).
 * miles_per_gallon: Average miles per gallon (float).
 * parking_fees: Parking fees per day (int).
 * tolls: Tolls per day (int).
 * 
 * The program calculates the daily cost of driving using the formula:
   cost_per_day = (miles_driven / miles_per_gallon) * cost_per_gallon + parking_fees + tolls) 
 * 
 * Siddharth Ghosh June 19 2024
 * */

#include <stdio.h>

int main (void){
	float miles_driven = 35;
	float cost_per_gallon = 3.50;
	float miles_per_gallon = 25;
	int parking_fees = 1;
	int tolls = 2;
	
	float cost_per_day = (miles_driven / miles_per_gallon) * cost_per_gallon + (parking_fees * 10) + (tolls * 5);
	
	printf("Miles driven per day: %f\n", miles_driven);
	printf("Cost per gallon: %f\n", cost_per_gallon);
	printf("Miles per gallon: %f\n", miles_per_gallon);
	printf("Parking fees ($10 per fee): $%i\n", (parking_fees * 10) );
	printf("Tolls ($5 per toll): $%i\n", (tolls * 5) );
	printf("Cost per day: $%f", cost_per_day);
}
