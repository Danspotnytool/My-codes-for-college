/**
 * @author Baynosa, Daniel John E.
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>

#define log printf

int main() {
    char color;
    log("Enter a color: ");
    scanf("%c", &color);

    log("Equivalent color of %c is ", color);
    if (color == 'b' || color == 'B') {
        log("Blue");
    } else if (color == 'r' || color == 'R') {
        log("Red");
    } else if (color == 'g' || color == 'G') {
        log("Green");
    } else if (color == 'y' || color == 'Y') {
        log("Yellow");
    } else {
        log("Unknown color");
    };
    return 0;
};
