/* This program allows the user to enter up to 20 weight values and record the number of items entered, the average of the items, the item closest to the average, and the amount of that item
 * The weight values are stored in an array with 20 elements maximum.
 * The number of items entered is denoted as num_weights.
 * The sum of all the items entered is denoted as sum_weight
 * The avergae of the items entered is denoted as average, and it equal to sum_weight / num_weights
 * The program only allows the user to enter positive numbers and 0 to exit the loop.
 * 
 * Siddharth Ghosh - Jun 26, 2024
 *  
 * */

#include <stdio.h>
#include <math.h>

int main (void){
	float weights[20];
	int num_weights = 0;
	float sum_weight  = 0;
	
	printf("Weights Calculator\n");
	
	while (num_weights <= 20){
		float weight;
		printf("Enter weight in kg (enter 0 to stop): ");
		scanf("%f", &weight);
		
		if (weight < 0) {
			printf("Enter positive numbers only\n");
			continue;
		}
		
		if (weight == 0){
			break;
		}
		
		weights[num_weights] = weight;
		sum_weight += weight;
		num_weights++;
	}
	
	printf("Number of weights: %i\n", num_weights);
	
	float average = sum_weight / num_weights;
	printf("Average weight: %.3f\n", average);
	
	float min_diff = fabs(weights[0] - average);
	for (int i = 1; i < num_weights; i++) {
		float diff = fabs(weights[i] - average);
		if (diff < min_diff){
			min_diff = diff;
		}
	}
	
	printf("Number closest to average: ");
	int n_closest = 0;
	for (int i = 0; i < num_weights; i++){
		if (fabs(weights[i] - average) == min_diff){
			printf("%.3f\n", weights[i]);
			n_closest++;
		}
	}
	
	printf("Number of values closest to average: %i\n", n_closest);
	
	return 0;
	
}
