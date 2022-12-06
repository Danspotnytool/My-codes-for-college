/**
 * @author Daniel John E. Baynosa
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define log printf

// fahr, cels
float fahr, cels;

int main() {
    log("Enter the temperature in fahrenheit: ");
    scanf("%f", &fahr);
    cels = (fahr - 32) * 5 / 9;

    system("cls");

    log("%.2f fahrenheit is %.2f celsius", fahr, cels);
    return 0;
};