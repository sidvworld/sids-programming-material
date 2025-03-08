/*
 * This program defines a structure named 'student' that contains
 * information about students, including their ID, year,
 * and an array of four test scores.
 * 
 * The program initializes an array of five student structures with 
 * predefined data. It includes functions to calculate (show_student_average)
 * and display (show_test_average) each student's average test score and 
 * the average score for each test across all students. 
 * The main function demonstrates these calculations by printing the results
 * using multiple for loops.
 * 
 * Siddharth Ghosh - July 8th 2024
 */

#include <stdio.h>

struct student {
	long int id;
	int year_in_college;
	double test_scores[4];
};

struct student student_list[5] =
{
	{9781473, 1, {97.25, 96.5, 90, 87.5}},
	{6014552, 2, {77.8, 80.0, 81.5, 79.5}},
	{3773909, 2, {85.5, 79, 79, 90.5}},
	{8102274, 1, {88.9, 90.5, 92, 94}},
	{4582934, 1, {90, 90, 92, 89.5}}

};

const int n_students = 5;
const int n_tests = 4;

void show_student_average(struct student s){
	double student_average = 0;
	
	for (int i = 0; i < n_tests; i++){
		student_average += s.test_scores[i];
	}
	
	student_average /= n_tests;
	
	printf("%ld 	%.2f\n", s.id, student_average);
}

void show_test_average(struct student s[]){
	double tests[4] = {0, 0, 0, 0};
	
	for (int i = 0; i < n_students; i++){
		for (int j = 0; j < n_tests; j++){
			tests[j] += s[i].test_scores[j];
		}
	}
	
	for (int i = 0; i < n_tests; i++){
		double average = tests[i] / n_students;
        printf("%i	%.2f\n", i + 1, average);
	}
	
}

int main (void) {
	
	printf("  ID	 Average Test Score\n");
	for (int i = 0; i < n_students; i++){
		show_student_average(student_list[i]);	
	}
	
	printf("\n");
	
	printf("Test	Average Score\n");
	show_test_average(student_list);
	
	return 0;
}
