#include <stdio.h>

int main(void) {
    int numbers[5] = {7, 2, 5, 3, 8};
    int product = 1;
    
    for (int i = 0; i < 5; i++) {
        product = product * numbers[i];
    }
    printf("%d\n", product);
    return 0;
}

/* Initialize product to 1, not 0 
 * i should be less than 5, not 6
 * Product is not an array, so you can't access the index i from it. Instead, you multiple by the index of number
 * */
 
