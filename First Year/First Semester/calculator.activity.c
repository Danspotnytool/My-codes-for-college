/**
 * @author Baynosa, Daniel John E.
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>

#define log printf

int main() {
    float opperand1, opperand2, result;
    char operator;

    log("Enter first opperand: ");
    scanf(" %f", &opperand1);

    log("Enter operator: ");
    scanf(" %s", &operator);

    log("Enter second opperand: ");
    scanf(" %f", &opperand2);

    switch (operator) {
        case '+':
            result = opperand1 + opperand2;
            break;
        case '-':
            result = opperand1 - opperand2;
            break;
        case '*':
            result = opperand1 * opperand2;
            break;
        case '/':
            if (opperand2 == 0) {
                printf("Error: You cannot devide by zero!");
                return 1;
            };
            result = opperand1 / opperand2;
            break;
        default:
            printf("Error: Invalid operator!");
            return 1;
    };
    printf("The result of %.2f %c %.2f is %.2f", opperand1, operator, opperand2, result);
    return 0;
};