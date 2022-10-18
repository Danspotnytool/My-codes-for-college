/**
 * @author Baynosa, Daniel John E.
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define log printf

int main() {
    int base, exponent, answer;
    log("Enter the base: ");
    scanf("%d", &base);

    log("Enter the exponent: ");
    scanf("%d", &exponent);

    answer = pow(base, exponent);

    printf("Answer: %i", answer);
    return 0;
};