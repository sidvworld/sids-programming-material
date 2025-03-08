/*
 * This program reads temperature data from a file containing the daily
 * maximum and minimum temperatures for San José, California for the year 2020.
 * The program calculates and outputs the monthly average maximum and minimum
 * temperatures to a specified output file.
 *
 * Input File: san_jose_temperature_2020.txt
 *    The input file contains data:
 *    Year Month Day MaxTemp MinTemp
 * 
 * Output File:
 *    The output file contains the monthly average maximum and minimum
 *    temperatures.
 *
 * Siddharth Ghosh July 22 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "san_jose_temperature_2020.txt"

const char* getMonthName(int month) {
    static const char* monthNames[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    return monthNames[month - 1];
}

void calculateMonthlyAverages(FILE *input, double maxTemps[], double minTemps[], int days[]) {
    int year, month, day;
    double maxTemp, minTemp;

    while (fscanf(input, "%d %d %d %lf %lf", &year, &month, &day, &maxTemp, &minTemp) == 5) {
        maxTemps[month - 1] += maxTemp;
        minTemps[month - 1] += minTemp;
        days[month - 1]++;
    }

    for (int i = 0; i < 12; i++) {
        if (days[i] > 0) {
            maxTemps[i] /= days[i];
            minTemps[i] /= days[i];
        }
    }
}

int main (void) {
    FILE *inputFile, *outputFile;
    char outputFileName[256];
    double maxTemps[12] = {0};
    double minTemps[12] = {0};
    int days[12] = {0};

    inputFile = fopen(FILENAME, "r");
    if (inputFile == NULL) {
        printf("Unable to open input file %s\n", FILENAME);
        return 1;
    }

    while (1) {
        printf("Enter output file name: ");
        scanf("%255s", outputFileName);

        outputFile = fopen(outputFileName, "w");
        if (outputFile == NULL) {
            printf("Unable to open output file %s\n", outputFileName);
        } else {
            break;
        }
    }

    calculateMonthlyAverages(inputFile, maxTemps, minTemps, days);

    fprintf(outputFile, "Mon./Year Avg Max  Avg Min (°C)\n");
    for (int i = 0; i < 12; i++) {
        fprintf(outputFile, "%s 2020   %6.2f   %6.2f\n", getMonthName(i + 1), maxTemps[i], minTemps[i]);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

