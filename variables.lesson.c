/**
 * @author Daniel John E. Baynosa
 * @section BSIT - 1C
 */


#include <stdio.h>

int main() {
    // Get user input
    char name[50];
    printf("Enter your name: ");
    scanf("%[^\n]s%*c", name);

    char otherName[50];
    printf("Enter your other name: ");
    scanf("%[^\n]s%*c", otherName);

    char nickname[50];
    printf("Enter your nickname: ");
    scanf("%[^\n]s%*c", nickname);

    // Print user input
    printf("\n");
    printf("Hello, %s!", name);
    printf("Hello, %s!", otherName);
    printf("Hello, %s!", nickname);

    return 0;
};