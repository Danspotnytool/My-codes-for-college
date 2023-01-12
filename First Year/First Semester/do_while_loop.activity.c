/**
 * @author Baynosa, Daniel John E.
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>

#define log printf

int main() {
    char answer;

    do {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
        log("-- Qualified to vote --");
        log("\n\n");

        int age;
        log("Enter your age: ");
        scanf("%d", &age);
        log("\n\n");

        if (age >= 18) {
            log("Qualified to vote!");
        } else {
            log("Too young!");
        };
        log("\n\n");

        log("Do you want to try again? [Y|y|*]: ");
        scanf(" %s", &answer);
    } while (answer == 'Y' || answer == 'y');

    return 0;
};