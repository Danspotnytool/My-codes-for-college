/**
 * @author Daniel John E. Baynosa
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define log printf

// cels, fahr
float cels, fahr;

int main() {
    log("Enter the temperature in celsius: ");
    scanf("%f", &cels);
    fahr = (cels * 9 / 5) + 32;

    system("cls");

    log("%.2f celsius is %.2f fahrenheit", cels, fahr);
    return 0;
};