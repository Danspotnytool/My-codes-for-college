/**
 * @author Baynosa, Daniel John E.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define log printf

void main() {
    int num = 179;
    log("Enter a number: ");
    // scanf("%d", &num);
    // Convert to binary
    int binary[8];
    while (num > 0) {
        for (int i = 0; i < 8; i++) {
            binary[i] = num % 2;
            num /= 2;
        };
    };
    // Print binary
    for (int i = 7; i >= 0; i--) {
        log("%d", binary[i]);
    };
    log("\n");

    // Convert back to number
    int newNum = 0;
    for (int i = 0; i < 8; i++) {
        newNum += binary[i] * pow(2, i);
    };
    log("%d", newNum);
};