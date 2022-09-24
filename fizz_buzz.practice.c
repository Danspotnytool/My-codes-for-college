
#include <stdio.h>

void main() {
    printf("Fizz Buzz\n");

    const char fizz[] = "fizz";
    const char buzz[] = "buzz";

    const int amount = 100;

    for (int i = 1; i < amount+1; i++){
        if ((i % 2) == 0 && (i % 5) == 0) {
            printf(fizz);
            printf(buzz);
        } else if ((i % 2) == 0) {
            printf(fizz);
        } else if ((i & 5) == 0) {
            printf(buzz);
        } else {
            printf("%d", i);
        };
        printf("\n");
    };
};