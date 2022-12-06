
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define log printf

// b - base
// h - height
// a - area
float b, h, A;



int main() {
    log("Enter the length of the base: ");
    scanf("%f", &b);
    log("Enter the height of the triangle: ");
    scanf("%f", &h);

    A = (b * h) / 2;

    system("cls");
    log("The area of the triangle is: %.2f", A);
    return 0;
};