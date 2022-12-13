/**
 * @author Baynosa, Daniel John
 * @section BSIT-1C
 */
#include <stdio.h>

int main() {
    // Declare integer variables
    int x, y, z, a, b, c;

    printf(" Input the value of X: ");
    scanf(" %d", &x);
    printf(" Input the value of Y: ");
    scanf(" %d", &y);
    printf(" Input the value of Z: ");
    scanf(" %d", &z);

    // use post-increment operator to update the value by 1
    a = x--;
    b = y--;
    c = z--;

    printf("\n The updated value of a: %d", a);
    printf("\n The updated value of b: %d", b);
    printf("\n The updated value of c: %d", c);

    printf("\n\n The updated value of X: %d", x);
    printf("\n The updated value of Y: %d", y);
    printf("\n The updated value of Z: %d", z);

    return 0;
};