/**
 * @author Baynosa, Daniel John E.
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>

#define log printf

int main() {
    int A, B;

    log("Enter value of A: ");
    scanf("%d", &A);

    log("Enter value of B: ");
    scanf("%d", &B);

    if (A > B) {
        log("%d is greater than %d", A, B);
    }
    if (B > A) {
        log("%d is greater than %d", B, A);
    }
    return 0;
};