
#include <stdio.h>


void main() {
    // Creating a pyramid

    /**
     * Step by step explanation
     * 
     * 1. Set a height for the pyramid
     * 2. Create a string for the shade and space characters
     * 3. Create a loop to print the pyramid
     * 4. Print the spaces inversely relative to the height
     * 5. Print the shades relative to the height
     * 6. Print the shades again to make it a pyramid
     * 7. Print the spaces again to give it an "LMAO SO COOL" effect
     * 8. Print the a new line
     * 9. Repeat the process until the height is reached
     */

    // 1
    const int height = 15;

    // 2
    const char shade[] = "*";
    const char space[] = " ";



    printf("%s", "Pyramid: \n");

    // 3
    for (int i = 0; i < height; i++) {
        // 4
        for (int j = 0; j < height - i; j++) {
            printf("%s", space);
        };

        // 5
        for (int k = 0; k < i + 1; k++) {
            printf("%s", shade);
        };

        // 6
        for (int k = 0; k < i + 1; k++) {
            printf("%s", shade);
        };

        // 7
        for (int j = 0; j < height - i; j++) {
            printf("%s", space);
        };

        // 8
        printf("%s", "\n");
    };
};