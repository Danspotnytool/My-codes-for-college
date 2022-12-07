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

#define RED_T     "\x1B[31m"
#define GREEN_T   "\x1B[32m"
#define LIME_T    "\x1B[92m"
#define BLUE_T    "\x1B[34m"
#define YELLOW_T  "\x1B[33m"

#define BLUE_B    "\x1B[44m"
#define GREEN_B   "\x1B[42m"
#define LIME_B    "\x1B[102m"
#define RED_B     "\x1B[41m"
#define YELLOW_B  "\x1B[43m"

#define RESET     "\x1B[0m"

#define log printf

/**
 * Area Calculator
 *      Area of Triangle
 *      Area of Circle
 *      Area of Rectangle
 *      Area of Parallelogram
 * 
 * Converter
 *      Temperature Convert
 *          Fahrenheit to Celsius
 *          Celsius To Fahrenheit
 *      Fraction to Whole Number
 * 
 * Color Selection
 * 
 * Resume Creating System
 * 
 * Number Function
 *      Positive or Negative
 *      Age Qualified Voting
 *      Two Number Comparision
 *      Odd or Even
 * 
 * Grading System
 *      Pass or Failed
 *      Grade Calculator
 * 
 * Quiz System
 * 
 * Calculator Function System
 *      Exponential
 *      Multiplication
 *      Division
 *      Addition
 *      Subtraction
 */

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
        log("\n");
        log(
            " " LIME_T "        GGGGGGGGGGGGG                                                                               " RESET "      " BLUE_T " 222222222222222    " RESET "   \n"
            " " LIME_T "     GGG::::::::::::G                                                                               " RESET "      " BLUE_T "2:::::::::::::::22  " RESET "   \n"
            " " LIME_T "   GG:::::::::::::::G                                                                               " RESET "      " BLUE_T "2::::::222222:::::2 " RESET "   \n"
            " " LIME_T "  G:::::GGGGGGGG::::G                                                                               " RESET "      " BLUE_T "2222222     2:::::2 " RESET "   \n"
            " " LIME_T " G:::::G       GGGGGG rrrrr   rrrrrrrrr       ooooooooooo    uuuuuu    uuuuuu   ppppp   ppppppppp   " RESET "      " BLUE_T "            2:::::2 " RESET "   \n"
            " " LIME_T "G:::::G               r::::rrr:::::::::r    oo:::::::::::oo  u::::u    u::::u   p::::ppp:::::::::p  " RESET "      " BLUE_T "            2:::::2 " RESET "   \n"
            " " LIME_T "G:::::G               r:::::::::::::::::r  o:::::::::::::::o u::::u    u::::u   p:::::::::::::::::p " RESET "      " BLUE_T "         2222::::2  " RESET "   \n"
            " " LIME_T "G:::::G    GGGGGGGGGG rr::::::rrrrr::::::r o:::::ooooo:::::o u::::u    u::::u   pp::::::ppppp::::::p" RESET "      " BLUE_T "    22222::::::22   " RESET "   \n"
            " " LIME_T "G:::::G    G::::::::G  r:::::r     r:::::r o::::o     o::::o u::::u    u::::u    p:::::p     p:::::p" RESET "      " BLUE_T "  22::::::::222     " RESET "   \n"
            " " LIME_T "G:::::G    GGGGG::::G  r:::::r     rrrrrrr o::::o     o::::o u::::u    u::::u    p:::::p     p:::::p" RESET "      " BLUE_T " 2:::::22222        " RESET "   \n"
            " " LIME_T "G:::::G        G::::G  r:::::r             o::::o     o::::o u::::u    u::::u    p:::::p     p:::::p" RESET "      " BLUE_T "2:::::2             " RESET "   \n"
            " " LIME_T " G:::::G       G::::G  r:::::r             o::::o     o::::o u:::::uuuu:::::u    p:::::p    p::::::p" RESET "      " BLUE_T "2:::::2             " RESET "   \n"
            " " LIME_T "  G:::::GGGGGGGG::::G  r:::::r             o:::::ooooo:::::o u:::::::::::::::uu  p:::::ppppp:::::::p" RESET "      " BLUE_T "2:::::2       222222" RESET "   \n"
            " " LIME_T "   GG:::::::::::::::G  r:::::r             o:::::::::::::::o  u:::::::::::::::u  p::::::::::::::::p " RESET "      " BLUE_T "2::::::2222222:::::2" RESET "   \n"
            " " LIME_T "     GGG::::::GGG:::G  r:::::r              oo:::::::::::oo    uu::::::::uu:::u  p::::::::::::::pp  " RESET "      " BLUE_T "2::::::::::::::::::2" RESET "   \n"
            " " LIME_T "        GGGGGG   GGGG  rrrrrrr                ooooooooooo        uuuuuuuu  uuuu  p::::::pppppppp    " RESET "      " BLUE_T "22222222222222222222" RESET "   \n"
            " " LIME_T "                                                                                 p:::::p            " RESET "      " BLUE_T "                    " RESET "   \n"
            " " LIME_T "                                                                                 p:::::p            " RESET "      " BLUE_T "                    " RESET "   \n"
            " " LIME_T "                                                                                p:::::::p           " RESET "      " BLUE_T "                    " RESET "   \n"
            " " LIME_T "                                                                                p:::::::p           " RESET "      " BLUE_T "                    " RESET "   \n"
            " " LIME_T "                                                                                p:::::::p           " RESET "      " BLUE_T "                    " RESET "   \n"
            " " LIME_T "                                                                                ppppppppp           " RESET "      " BLUE_T "                    " RESET "   \n"
        );
        log("\n");
        log("\tDo you want to open the menu? (Y|y|N|n) > ");
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
    } else if (stage == 2) {
        log("\n");
        log("[=]--------------------------------------------------------------------------------------------[=]\n");
        log(
            " |%-32s" BLUE_T "##   ##  ###### #    # #     #" RESET "%-32s|\n"
            " |%-32s" BLUE_T "# # # #  #      ##   # #     #" RESET "%-32s|\n"
            " |%-32s" BLUE_T "#  #  #  ####   # ## # #     #" RESET "%-32s|\n"
            " |%-32s" BLUE_T "#     #  #      #   ## #     #" RESET "%-32s|\n"
            " |%-32s" BLUE_T "#     #  ###### #    #  ##### " RESET "%-32s|\n",
            "", "",
            "", "",
            "", "",
            "", "",
            "", "",
            "", ""
        );
        log("[=]--------------------------------------------------------------------------------------------[=]\n");
        log(
            " |%94s|\n"
            " |%94s|\n"
            " | %-5s[" LIME_T "1" RESET "] %-40s[" LIME_T "2" RESET "] %-40s|\n"
            " |%94s|\n"
            " |%94s|\n"
            " | %-5s[" LIME_T "3" RESET "] %-40s[" LIME_T "4" RESET "] %-40s|\n"
            " |%94s|\n"
            " |%94s|\n"
            " | %-5s[" LIME_T "5" RESET "] %-40s[" LIME_T "6" RESET "] %-40s|\n"
            " |%94s|\n"
            " |%94s|\n"
            " | %-5s[" LIME_T "7" RESET "] %-40s[" LIME_T "8" RESET "] %-40s|\n"
            " |%94s|\n"
            " |%94s|\n",

            "", "",
            "", "Area Calculator", "Converter",
            "", "",
            "", "Color Selection", "Resume Creating System",
            "", "",
            "", "Number Function", "Grading System",
            "", "",
            "", "Quiz System", "Calculator Function System",
            "", ""
        );
        log("[=]--------------------------------------------------------------------------------------------[=]\n");
        log("\n");

        log("Please choose the number of the function you want to use > ");
        int menuAnswer;
        scanf("%d", &menuAnswer);
    };

    return 0;
};