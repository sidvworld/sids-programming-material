#include <stdio.h>

double after_sales_tax(double amt) {
    double sale = amt + (amt * .06);
    return sale;
}

int main(void) {
    printf("Welcome to the 6%% tax calculator!\n");
    double total = 0.0;
    printf("Please enter the total amount: ");
    scanf("%lf", &total);
    printf("The total amount after tax is: $%.2f\n", after_sales_tax(total));
    return 0;
}

/* include standard input output
 * specify amt to double
 * return sale, not amt
 * use extra % to indicate usage of % and not conversion type
 * */

