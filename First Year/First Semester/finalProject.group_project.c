/**
 * @authors Baynosa, Daniel John
 *          Capones, John Mark C.
 *          Dayandayan, Mary Jean
 *          Joya, Acel
 * 
 * @section BSIT-1C
 */

/**
 * Task:
 *      Compile all programs made by each member
 *      from prelim and combine them into one program.
 */

#include <stdio.h>
#include <stdlib.h>

#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define BLUE    "\x1B[34m"
#define RESET   "\x1B[0m"

#define log printf

// 1 = welcome screen, 2 = main menu, 3 sub menu
int stage = 1;

int main() {
    // Clearing the screen because the program would not include colors unless the screen is cleared
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    if (stage == 1) {
        log("Title screen\n");
        log("Do you want to open the menu? (y/n): ");
        char titleScreenAnswer;
        scanf("%c", &titleScreenAnswer);

        if (titleScreenAnswer == 'n' || titleScreenAnswer == 'N') {
            // The answer is N or No, so the program will exit
            log("The Answer is N or No\n");
            return 0;
        } else if (titleScreenAnswer != 'y' && titleScreenAnswer != 'Y') {
            // The program will repeat the question if the answer is neither Yes nor No
            main();
        } else {
            // The program will proceed to the second stage if the answer is Yes
            stage = 2;
            main();
        };
    } else if (stage == 2){
        log("Printing the main menu\n");
    };

    return 0;
};