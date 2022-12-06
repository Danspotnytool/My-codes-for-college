/**
 * @author Daniel John E. Baynosa
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int first, second, third, sum, diff, prod, power;
    float quo;

    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);

    printf("Enter third number: ");
    scanf("%d", &third);

    sum = first + second + third;
    diff = third - second;
    prod = first * third;
    quo = first / second;
    power = pow(first, second);

    printf("Sum: %d", sum);
    printf("\n");
    printf("Difference: %d", diff);
    printf("\n");
    printf("Product: %d", prod);
    printf("\n");
    printf("Quotient: %f", quo);
    printf("\n");
    printf("Power: %d", power);
    return 0;
};