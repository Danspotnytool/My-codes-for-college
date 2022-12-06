/**
 * @author Baynosa, Daniel John E.
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>

#define log printf

int main() {
    float G;
    char P[] = "You passed! Congratulations!";
    char F[] = "You failed! Better luck next time!";

    log("Enter grade: ");
    scanf("%f", &G);

    if (G >= 75) {
        log("%s", P);
    } else {
        log("%s", F);
    }

    return 0;
};