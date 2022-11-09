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
    int x = 5;
    int y = 10;
    int a = 20;
    int b = 20;

    if (x < y && a == b) {
        log("x is less than y AND a is equal to b");
        log("\n");
    }
    if (x < y || a == b) {
        log("x is less than y OR a is equal to b");
        log("\n");
    }
    if (!(x > y && a < b)) {   // (x < y && a == b)
        log("NOT (x is less than y AND a is equal to b)");
        log("\n");
    }

    log("Code after if");
    return 0;
};