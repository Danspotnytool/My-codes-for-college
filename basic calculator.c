/**
 * @author Daniel John E. Baynosa
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float first, second, third, sum, diff, prod, power;
    double quo;

    printf("Enter first number: ");
    scanf("%f", &first);

    printf("Enter second number: ");
    scanf("%f", &second);

    printf("Enter third number: ");
    scanf("%f", &third);

    sum = first + second + third;
    diff = third - second;
    prod = first * third;
    quo = first / second;
    power = pow(first, second);

    printf("The sum of %.2f, %.2f, and %.2f is %.2f", first, second, third, sum);
    printf("\n");
    printf("The difference of %.2f and %.2f is %.2f", third, second, diff);
    printf("\n");
    printf("The product of %.2f and %.2f is %.2f", first, third, prod);
    printf("\n");
    printf("The quotient of %.2f and %.2f is %.2f", first, second, quo);
    printf("\n");
    printf("The power of %.2f to the %.2f is %.2f", first, second, power);
    return 0;
};