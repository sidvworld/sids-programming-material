/*
 * This program analyzes a student's schedule for time conflicts
 * between class sections at EVC.
 *
 * The program offers two languages:    
 * English (default) or German based on LANG setting.
 * English: M, T, W, Th, F, Sa, Su, conflicts with
 * German: Mo, Di, Mi, Do, Fr, Sa, So, steht in Konflikt mit
 *
 * Siddharth Ghosh July 17th 2024
 */


#include <stdio.h>
#include <stdbool.h>

#define LANG 1

#if LANG == 0
    #define MON "M"
    #define TUE "T"
    #define WED "W"
    #define THU "Th"
    #define FRI "F"
    #define SAT "Sa"
    #define SUN "Su"
    #define CONFLICT "conflicts with"
#else
    #define MON "Mo"
    #define TUE "Di"
    #define WED "Mi"
    #define THU "Do"
    #define FRI "Fr"
    #define SAT "Sa"
    #define SUN "So"
    #define CONFLICT "steht in Konflikt mit"
#endif


#define MONDAY    (1 << 0) // 1
#define TUESDAY   (1 << 1) // 2
#define WEDNESDAY (1 << 2) // 4
#define THURSDAY  (1 << 3) // 8
#define FRIDAY    (1 << 4) // 16
#define SATURDAY  (1 << 5) // 32
#define SUNDAY    (1 << 6) // 64


struct schedule_format {
	char name[20];
	unsigned int days : 7;
	unsigned int start_h : 5;   
    unsigned int start_m : 6;
    unsigned int end_h : 5; 
    unsigned int end_m : 6;  
};

struct schedule_format classes[7] = {
	{"ECON 101", MONDAY | WEDNESDAY, 9, 15, 11, 35},
    {"PHYS 002", TUESDAY | THURSDAY, 10, 25, 13, 00},
    {"COMSC 079C", MONDAY, 7, 45, 9, 30},
    {"ACCTG 0063A", WEDNESDAY | FRIDAY, 10, 15, 12, 35},
    {"CHEM 001", TUESDAY | THURSDAY, 17, 00, 19, 25},
    {"MATH 017", MONDAY | TUESDAY | WEDNESDAY | THURSDAY, 13, 05, 15, 45},
    {"ART 099", TUESDAY | THURSDAY, 12, 05, 16, 35}
};

bool has_conflict(struct schedule_format sect_a, struct schedule_format sect_b){
	if (sect_a.days & sect_b.days){
		if ((sect_a.start_h < sect_b.start_h) || (sect_a.start_h == sect_b.start_h && sect_a.start_m < sect_b.end_m)){
			if((sect_b.start_h < sect_a.end_h) || (sect_b.start_h == sect_a.end_h && sect_b.start_m < sect_a.end_m)){
				return true;
			}
		}
	}
	return false;
}

void display(struct schedule_format sect) {
    printf("%s ", sect.name);
    printf("%s", (sect.days & MONDAY) ? MON : "");
    printf("%s", (sect.days & TUESDAY) ? TUE : "");
    printf("%s", (sect.days & WEDNESDAY) ? WED : "");
    printf("%s", (sect.days & THURSDAY) ? THU : "");
    printf("%s", (sect.days & FRIDAY) ? FRI : "");
    printf("%s", (sect.days & SATURDAY) ? SAT : "");
    printf("%s", (sect.days & SUNDAY) ? SUN : "");
    printf(" (%i:%i-%i:%i)", sect.start_h, sect.start_m, sect.end_h, sect.end_m);
}

int main (void){
	for (int i = 0; i < 7; i++){
		for (int j = i + 1; j < 7; j++) {
			if (has_conflict(classes[i], classes[j])){
				display(classes[i]);
				printf(" %s ", CONFLICT);
				display(classes[j]);
				printf("\n");
			}
		}
	}
	
	return 0;
}
