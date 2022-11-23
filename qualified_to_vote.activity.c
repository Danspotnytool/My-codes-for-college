/**
 * @author Baynosa, Daniel John E.
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>

#define log printf

int main() {
    int age;
    log("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        log("Qualified to vote!");
    } else {
        log("Too young!");
    };

    return 0;
};