/**
 * @author Baynosa, Daniel John E.
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define log printf

int main() {
    int x = 10;
    int y = 5;

    if (x == y) {
        log("%d is equal to %d", x, y);
        log("\n");
    }
    if (x > y) {
        log("%d is greater than %d", x, y);
        log("\n");
    }
    if (x < y) {
        log("%d is less than %d", x, y);
        log("\n");
    }
    if (x != y) {
        log("%d is not equal to %d", x, y);
        log("\n");
    }
    if (x <= y) {
        log("%d is less than or equal to %d", x, y);
        log("\n");
    }
    if (x >= y) {
        log("%d is greater than or equal to %d", x, y);
        log("\n");
    }

    log("Code after if");
    return 0;
};