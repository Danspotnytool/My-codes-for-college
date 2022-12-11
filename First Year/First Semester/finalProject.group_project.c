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
 *      Area of Triangle (ID: 1)
 *      Area of Circle (ID: 2)
 *      Area of Rectangle (ID: 3)
 *      Area of Parallelogram (ID: 4)
 * 
 * Converter
 *      Temperature Convert (ID: 1)
 *          Fahrenheit to Celsius (ID: 5)
 *          Celsius To Fahrenheit (ID: 6)
 *      Fraction to Whole Number (ID: 7)
 * 
 * Color Selection (ID: 8)
 * 
 * Resume Creating System (ID: 9)
 * 
 * Number Function
 *      Positive or Negative (ID: 10)
 *      Age Qualified Voting (ID: 11)
 *      Two Number Comparision (ID: 12)
 *      Odd or Even (ID: 13)
 * 
 * Grading System
 *      Pass or Failed (ID: 14)
 *      Grade Calculator (ID: 15)
 * 
 * Quiz System (ID: 16)
 * 
 * Calculator Function System
 *      Exponential (ID: 17)
 *      Multiplication (ID: 18)
 *      Division (ID: 19)
 *      Addition (ID: 20)
 *      Subtraction (ID: 21)
 */

// 1 = welcome screen, 2 = main menu, 3 sub menu or category, 4 = sub menu or sub category, 5 = choose function, 6 = function
int stage = 1;
// 1 = area calculator, 2 = converter, 3 = color selection, 4 = resume creating system, 5 = number function, 6 = grading system, 7 = quiz system, 8 = calculator function system
int category = 0;
// 1 = Area of Triangle, 2 = Area of Circle, 3 = Area of Rectangle, 4 = Area of Parallelogram, 5 = Fahrenheit to Celsius, 6 = Celsius To Fahrenheit, 7 = Fraction to Whole Number, 8 = Color Selection, 9 = Resume Creating System, 10 = Positive or Negative, 11 = Age Qualified Voting, 12 = Two Number Comparision, 13 = Odd or Even, 14 = Pass or Failed, 15 = Grade Calculator, 16 = Quiz System, 17 = Exponential, 18 = Multiplication, 19 = Division, 20 = Addition, 21 = Subtraction
int function = 0;

int main() {
    // Clearing the screen because the program would not include colors unless the screen is cleared
    #ifdef _WIN32
        system("cls");
        if (stage == 1) {
            system("mode con: cols=128 lines=30");
        } else if (stage == 2) {
            system("mode con: cols=98 lines=30");
        };
        system("cls");
    #else
        system("clear");
        if (stage == 1) {
            system("resize -s 30 128");
        } else if (stage == 2) {
            system("resize -s 30 98");
        };
        system("clear");
    #endif

    if (stage == 1) {
        log("\n");
        log(
            " " LIME_T "        GGGGGGGGGGGGG                                                                               " RESET "      " BLUE_T " 222222222222222    " RESET "\n"
            " " LIME_T "     GGG::::::::::::G                                                                               " RESET "      " BLUE_T "2:::::::::::::::22  " RESET "\n"
            " " LIME_T "   GG:::::::::::::::G                                                                               " RESET "      " BLUE_T "2::::::222222:::::2 " RESET "\n"
            " " LIME_T "  G:::::GGGGGGGG::::G                                                                               " RESET "      " BLUE_T "2222222     2:::::2 " RESET "\n"
            " " LIME_T " G:::::G       GGGGGG rrrrr   rrrrrrrrr       ooooooooooo    uuuuuu    uuuuuu   ppppp   ppppppppp   " RESET "      " BLUE_T "            2:::::2 " RESET "\n"
            " " LIME_T "G:::::G               r::::rrr:::::::::r    oo:::::::::::oo  u::::u    u::::u   p::::ppp:::::::::p  " RESET "      " BLUE_T "            2:::::2 " RESET "\n"
            " " LIME_T "G:::::G               r:::::::::::::::::r  o:::::::::::::::o u::::u    u::::u   p:::::::::::::::::p " RESET "      " BLUE_T "         2222::::2  " RESET "\n"
            " " LIME_T "G:::::G    GGGGGGGGGG rr::::::rrrrr::::::r o:::::ooooo:::::o u::::u    u::::u   pp::::::ppppp::::::p" RESET "      " BLUE_T "    22222::::::22   " RESET "\n"
            " " LIME_T "G:::::G    G::::::::G  r:::::r     r:::::r o::::o     o::::o u::::u    u::::u    p:::::p     p:::::p" RESET "      " BLUE_T "  22::::::::222     " RESET "\n"
            " " LIME_T "G:::::G    GGGGG::::G  r:::::r     rrrrrrr o::::o     o::::o u::::u    u::::u    p:::::p     p:::::p" RESET "      " BLUE_T " 2:::::22222        " RESET "\n"
            " " LIME_T "G:::::G        G::::G  r:::::r             o::::o     o::::o u::::u    u::::u    p:::::p     p:::::p" RESET "      " BLUE_T "2:::::2             " RESET "\n"
            " " LIME_T " G:::::G       G::::G  r:::::r             o::::o     o::::o u:::::uuuu:::::u    p:::::p    p::::::p" RESET "      " BLUE_T "2:::::2             " RESET "\n"
            " " LIME_T "  G:::::GGGGGGGG::::G  r:::::r             o:::::ooooo:::::o u:::::::::::::::uu  p:::::ppppp:::::::p" RESET "      " BLUE_T "2:::::2       222222" RESET "\n"
            " " LIME_T "   GG:::::::::::::::G  r:::::r             o:::::::::::::::o  u:::::::::::::::u  p::::::::::::::::p " RESET "      " BLUE_T "2::::::2222222:::::2" RESET "\n"
            " " LIME_T "     GGG::::::GGG:::G  r:::::r              oo:::::::::::oo    uu::::::::uu:::u  p::::::::::::::pp  " RESET "      " BLUE_T "2::::::::::::::::::2" RESET "\n"
            " " LIME_T "        GGGGGG   GGGG  rrrrrrr                ooooooooooo        uuuuuuuu  uuuu  p::::::pppppppp    " RESET "      " BLUE_T "22222222222222222222" RESET "\n"
            " " LIME_T "                                                                                 p:::::p            " RESET "      " BLUE_T "                    " RESET "\n"
            " " LIME_T "                                                                                 p:::::p            " RESET "      " BLUE_T "                    " RESET "\n"
            " " LIME_T "                                                                                p:::::::p           " RESET "      " BLUE_T "                    " RESET "\n"
            " " LIME_T "                                                                                p:::::::p           " RESET "      " BLUE_T "                    " RESET "\n"
            " " LIME_T "                                                                                p:::::::p           " RESET "      " BLUE_T "                    " RESET "\n"
            " " LIME_T "                                                                                ppppppppp           " RESET "      " BLUE_T "                    " RESET "\n"
        );
        log("\n");
        log(YELLOW_T "Do you want to open the menu? (Y|y|N|n) > " RESET);
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
            "", ""
        );
        log("[=]--------------------------------------------------------------------------------------------[=]\n");
        log(
            " |%94s|\n"
            " |%94s|\n"
            " |%-6s[" LIME_T "1" RESET "] %-40s[" LIME_T "2" RESET "] %-40s|\n"
            " |%94s|\n"
            " |%94s|\n"
            " |%-6s[" LIME_T "3" RESET "] %-40s[" LIME_T "4" RESET "] %-40s|\n"
            " |%94s|\n"
            " |%94s|\n"
            " |%-6s[" LIME_T "5" RESET "] %-40s[" LIME_T "6" RESET "] %-40s|\n"
            " |%94s|\n"
            " |%94s|\n"
            " |%-6s[" LIME_T "7" RESET "] %-40s[" LIME_T "8" RESET "] %-40s|\n"
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

        log(YELLOW_T "Please choose the number of the function you want to use > " RESET);
        char menuAnswer;
        scanf("%c", &menuAnswer);
        category = menuAnswer;
        // convert the char to int
        if (menuAnswer - '0' >= 1 && menuAnswer - '0' <= 8) {
            stage = 3;
            main();
        } else {
            main();
        };
    } else if (stage == 3) {
        switch (category) {
            case '1':
                stage = 5;
                log("Area Calculator\n");
                break;
            case '2':
                stage = 4;
                log("Converter\n");
                break;
            case '3':
                stage = 6;
                function = 8;
                log("Color Selection\n");
                break;
            case '4':
                stage = 6;
                function = 9;
                log("Resume Creating System\n");
                break;
            case '5':
                stage = 5;
                log("Number Function\n");
                break;
            case '6':
                stage = 5;
                log("Grading System\n14936702contro");
                break;
            case '7':
                stage = 6;
                function = 16;
                log("Quiz System\n");
                break;
            case '8':
                stage = 5;
                log("Calculator Function System\n");
                break;
            default:
                break;
        };
        main();
    } else if (stage == 4) {
        // Special stage for Converter
        log("\n");
        log("[=]-----------------------------------------------[=]\n");
        log(" |%-20sConverter%-20s|\n", "", "");
        log("[=]-----------------------------------------------[=]\n");
        log(
            " |%-49s|\n"
            " |%-6s[" LIME_T "1" RESET "] Temperature%-28s|\n"
            " |%-49s|\n"
            " |%-6s[" LIME_T "2" RESET "] Fraction to Whole Number%-15s|\n"
            " |%-49s|\n",
            "",
            "", "",
            "",
            "", "",
            ""
        );
        log("[=]-----------------------------------------------[=]\n");
        log("\n");
        log(YELLOW_T "Please choose the number of the function you want to use > " RESET);
        char converterAnswer;
        scanf(" %c", &converterAnswer);
        if (converterAnswer - '0' == 2) {
            // Fraction to Whole Number
            stage = 6;
            function = 7;
            main();
        } else if (converterAnswer - '0' == 1) {
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            log("\n");
            log("[=]-----------------------------------------------[=]\n");
            log(" |%-20sConverter%-20s|\n", "", "");
            log("[=]-----------------------------------------------[=]\n");
            log(
                " |%-49s|\n"
                " |%-6s[" LIME_T "1" RESET "] Fahrenheit to Celsius%-18s|\n"
                " |%-49s|\n"
                " |%-6s[" LIME_T "2" RESET "] Celsius to Fahrenheit%-18s|\n"
                " |%-49s|\n",
                "",
                "", "",
                "",
                "", "",
                ""
            );
            log("[=]-----------------------------------------------[=]\n");
            log("\n");
            log(YELLOW_T "Please choose the number of the function you want to use > " RESET);
            char converterAnswer2;
            scanf(" %c", &converterAnswer2);
            if (converterAnswer2 - '0' == 1) {
                // Fahrenheit to Celsius
                stage = 6;
                function = 5;
                main();
            } else if (converterAnswer2 - '0' == 2) {
                // Celsius to Fahrenheit
                function = 6;
                stage = 6;
                main();
            } else {
                main();
            };
        } else {
            main();
        };
    } else if (stage == 6) {
        log("\n");
        log("Stage 6\n");
        log("Function: %d\n", function);
    };

    return 0;
};