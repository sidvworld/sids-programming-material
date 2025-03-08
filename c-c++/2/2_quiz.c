#include <stdio.h>

int main(void) {
    int data[3][4] = {
        {1, 0, 6, 6},
        {7, 8, 7, 1},
        {5, 7, 1, 1},
    };
    
    int column_sums[4] = {0, 0, 0, 0};
    
    /*
     * Write a nested for loop that will set
     * column_sums to the sums of the columns
     * in the data array.
     */
     
    for (int col = 0; col < 4; col++) {
        for (int row = 0; row < 3; row++) {
            column_sums[col] += data[row][col];
        }
    }
     
    printf("Column sums: ");
    for (int index = 0; index < 4; index++) {
        printf("%d ", column_sums[index]);
    }
    printf("\n");
    return 0;
}





