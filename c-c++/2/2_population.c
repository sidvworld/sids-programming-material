/* The program uses a basic linear growth model to estimate the population each year from 2011 to 2020.
 * The initial population in 2011 is to 308,401,808, and the annual increase is 1,021,379.
 *
 * The output is formatted as a table with two columns: Year and Population.
 *
 * The equation to estimate growth every year is: population = population + (annual_increase * (year - 2011)).
 * 
 * Siddharth Ghosh - Jun 24 2024
 * */
 
 
#include <stdio.h>

int main (void){
	int year;
	long int population = 308401808;
	
	printf("Size of int = %d\n", sizeof(int));

	printf("U.S. Census Bureau\n");
	printf("Year	Population\n");
	
	for (year = 2011; year <= 2020; year++) {
		population += (1021379 * (year - 2011));
		printf("%i	%ld\n", year, population);
	}
}
