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
    switch (color) {
        case 'b':
        case 'B':
            log("Blue");
            break;
        case 'r':
        case 'R':
            log("Red");
            break;
        case 'g':
        case 'G':
            log("Green");
            break;
        case 'y':
        case 'Y':
            log("Yellow");
            break;
        case 'v':
        case 'V':
            log("Violet");
            break;
        case 'p':
        case 'P':
            log("Pink");
            break;
        default:
            log("Unknown color");
            break;
    };
    log("\n");
    return 0;
};
