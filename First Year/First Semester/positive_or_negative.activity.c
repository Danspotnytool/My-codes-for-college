/**
 * @author Baynosa, Daniel John E.
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>

#define log printf

int main() {
    int number;
    log("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0) {
        log("Positive number!");
    } else {
        log("Negative number!");
    };

    return 0;
};
