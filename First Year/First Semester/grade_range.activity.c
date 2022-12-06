/**
 * @author Baynosa, Daniel John E.
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>

#define log printf

int main() {
    float grade;
    log("Enter your grade: ");
    scanf("%.2f", &grade);

    if (grade >= 90 && grade <= 100) {
        log("You got an A!");
    } else if (grade >= 80 && grade < 90) {
        log("You got a B!");
    } else if (grade >= 70 && grade < 80) {
        log("You got a C!");
    } else if (grade >= 60 && grade < 70) {
        log("You got a D!");
    } else if (grade >= 0 && grade < 60) {
        log("You got an F!");
    } else {
        log("Out of range!");
    };
    return 0;
};
