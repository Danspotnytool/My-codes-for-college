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
#include <string.h>
#include <math.h>

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
 * Simple C Quiz (ID: 16)
 * 
 * Calculator Function System
 *      Exponential (ID: 17)
 *      Multiplication (ID: 18)
 *      Division (ID: 19)
 *      Addition (ID: 20)
 *      Subtraction (ID: 21)
 * 
 * Increment and Decrement
 *      Pre-Increment (ID: 22)
 *      Post-Decrement (ID: 23)
 *      Pre-Decrement (ID: 24)
 *      Post-Decrement (ID: 25)
 * 
 * Operators
 *      Logical Operator (ID: 26)
 *      Relational Operator (ID: 27)
 */

// 1 = welcome screen, 2 = main menu, 3 sub menu or category, 4 = sub menu or sub category, 5 = choose function, 6 = function
// Stage 1: The welcome screen
// Stage 2: The main menu
// Stage 3: The sub menu or category
// Stage 4: the menu for Converter. The program would only go to this stage if the Converter was chosen in the stage 3
// Stage 5: All of the catetories
// Stage 6: All of the functions
int stage = 1;
// 1 = area calculator, 2 = converter, 3 = color selection, 4 = resume creating system, 5 = number function, 6 = grading system, 7 = Simple C Quiz, 8 = calculator function system, 9 = Temperature Convert, 10 = Increment and Decrement, 11 = Operators
int category = 0;
// 1 = Area of Triangle, 2 = Area of Circle, 3 = Area of Rectangle, 4 = Area of Parallelogram, 5 = Fahrenheit to Celsius, 6 = Celsius To Fahrenheit, 7 = Fraction to Whole Number, 8 = Color Selection, 9 = Resume Creating System, 10 = Positive or Negative, 11 = Age Qualified Voting, 12 = Two Number Comparision, 13 = Odd or Even, 14 = Pass or Failed, 15 = Grade Calculator, 16 = Simple C Quiz, 17 = Exponential, 18 = Multiplication, 19 = Division, 20 = Addition, 21 = Subtraction, 22 = Pre-Increment, 23 = Post-Decrement, 24 = Pre-Decrement, 25 = Post-Decrement, 26 = Logical Operator, 27 = Relational Operator
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
            system("printf '\033[8;30;128t'");
        } else if (stage == 2) {
            system("printf '\033[8;30;98t'");
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
        log("[=]--------------------------------------------------------------------------------------------[=]\n");
        log(
            " |%-32s" BLUE_T "##   ## ######  #    # #     #" RESET "%-32s|\n"
            " |%-32s" BLUE_T "# # # # #       ##   # #     #" RESET "%-32s|\n"
            " |%-32s" BLUE_T "#  #  # ####    # ## # #     #" RESET "%-32s|\n"
            " |%-32s" BLUE_T "#     # #       #   ## #     #" RESET "%-32s|\n"
            " |%-32s" BLUE_T "#     # ######  #    #  ##### " RESET "%-32s|\n",
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
            " |%94s|\n"
            " |%-6s[" LIME_T "9" RESET "] %-40s[" LIME_T "10" RESET "] %-39s|\n"
            " |%94s|\n"
            " |%94s|\n",

            "", "",
            "", "Area Calculator", "Converter",
            "", "",
            "", "Color Selection", "Resume Creating System",
            "", "",
            "", "Number Function", "Grading System",
            "", "",
            "", "Simple C Quiz", "Calculator Function System",
            "", "",
            "", "Increment and Decrement", "Operators",
            "", ""
        );
        log("[=]--------------------------------------------------------------------------------------------[=]\n");
        log("\n");

        log(YELLOW_T "Choose the number of the category you want to use > " RESET);
        int menuAnswer;
        scanf(" %d", &menuAnswer);
        category = menuAnswer;
        if (menuAnswer >= 1 && menuAnswer <= 10) {
            stage = 3;
            main();
        } else {
            main();
        };
    } else if (stage == 3) {
        switch (category) {
            case 1:
                stage = 5;
                log("Area Calculator\n");
                category = 1;
                break;
            case 2:
                stage = 4;
                log("Converter\n");
                break;
            case 3:
                stage = 6;
                function = 8;
                log("Color Selection\n");
                break;
            case 4:
                stage = 6;
                function = 9;
                log("Resume Creating System\n");
                break;
            case 5:
                stage = 5;
                log("Number Function\n");
                category = 5;
                break;
            case 6:
                stage = 5;
                log("Grading System\n");
                category = 6;
                break;
            case 7:
                stage = 6;
                function = 16;
                log("Simple C Quiz\n");
                break;
            case 8:
                stage = 5;
                log("Calculator Function System\n");
                category = 8;
                break;
            case 9:
                stage = 5;
                log("Increment and Decrement\n");
                category = 10;
                break;
            case 10:
                stage = 5;
                log("Operators\n");
                category = 11;
                break;
            default:
                break;
        };
        main();
    } else if (stage == 4) {
        // Special stage for Converter
        #ifdef _WIN32
            system("cls");
            system("mode con: cols=55 lines=14");
            system("cls");
        #else
            system("clear");
            system("printf '\033[8;14;55t'");
            system("clear");
        #endif
        log("[=]-------------------------------------------------[=]\n");
        log(" |%-21sConverter%-21s|\n", "", "");
        log("[=]-------------------------------------------------[=]\n");
        log(
            " |%-51s|\n"
            " |%-6s[" LIME_T "1" RESET "] Temperature%-30s|\n"
            " |%-51s|\n"
            " |%-6s[" LIME_T "2" RESET "] Fraction to Whole Number%-17s|\n"
            " |%-51s|\n",
            "",
            "", "",
            "",
            "", "",
            ""
        );
        log("[=]-------------------------------------------------[=]\n");
        log("\n");
        log(YELLOW_T "Choose the number of the function you want to use > " RESET);
        char converterAnswer;
        scanf(" %c", &converterAnswer);
        if (converterAnswer - '0' == 2) {
            // Fraction to Whole Number
            stage = 6;
            function = 7;
            main();
        } else if (converterAnswer - '0' == 1) {
            // Temperature
            stage = 5;
            category = 9;
            main();
        } else {
            main();
        };
    } else if (stage == 5) {
        char answer;
        switch (category) {
            case 1:
                // Area Calculator
                do {
                    #ifdef _WIN32
                        system("cls");
                        system("mode con: cols=57 lines=19");
                        system("cls");
                    #else
                        system("clear");
                        system("printf '\033[8;19;57t'");
                        system("clear");
                    #endif
                    // Area Calculator
                    log("[=]---------------------------------------------------[=]\n");
                    log(" |%-19sArea Calculator%-19s|\n", "", "");
                    log("[=]---------------------------------------------------[=]\n");
                    log(
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "1" RESET "] Triangle%-35s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "2" RESET "] Circle%-37s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "3" RESET "] Rectangle%-34s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "4" RESET "] Parallelogram%30s|\n"
                        " |%-53s|\n",
                        "",
                        "", "",
                        "",
                        "", "",
                        "",
                        "", "",
                        "",
                        "", "",
                        ""
                    );
                    log("[=]---------------------------------------------------[=]\n");
                    log("\n");
                    log(YELLOW_T "Choose the number of the function you want to use > " RESET);
                    scanf(" %c", &answer);
                } while (answer != '1' && answer != '2' && answer != '3' && answer != '4');
                switch (answer) {
                    case '1':
                        // Triangle
                        stage = 6;
                        function = 1;
                        break;
                    case '2':
                        // Circle
                        stage = 6;
                        function = 2;
                        break;
                    case '3':
                        // Rectangle
                        stage = 6;
                        function = 3;
                        break;
                    case '4':
                        // Parallelogram
                        stage = 6;
                        function = 4;
                        break;
                };
                break;
            case 5:
                // Number Function
                do {
                    #ifdef _WIN32
                        system("cls");
                        system("mode con: cols=57 lines=19");
                        system("cls");
                    #else
                        system("clear");
                        system("printf '\033[8;19;57t'");
                        system("clear");
                    #endif
                    // Area Calculator
                    log("[=]---------------------------------------------------[=]\n");
                    log(" |%-19sNumber Function%-19s|\n", "", "");
                    log("[=]---------------------------------------------------[=]\n");
                    log(
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "1" RESET "] Positive or Negative%-23s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "2" RESET "] Age Qualified Voting%-23s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "3" RESET "] Two Number Comparison%-22s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "4" RESET "] Odd or Even%-32s|\n"
                        " |%-53s|\n",
                        "",
                        "", "",
                        "",
                        "", "",
                        "",
                        "", "",
                        "",
                        "", "",
                        ""
                    );
                    log("[=]---------------------------------------------------[=]\n");
                    log("\n");
                    log(YELLOW_T "Choose the number of the function you want to use > " RESET);
                    scanf(" %c", &answer);
                } while (answer != '1' && answer != '2' && answer != '3' && answer != '4');
                switch (answer) {
                    case '1':
                        // Positive or Negative
                        stage = 6;
                        function = 10;
                        break;
                    case '2':
                        // Age Qualified Voting
                        stage = 6;
                        function = 11;
                        break;
                    case '3':
                        // Two Number Comparison
                        stage = 6;
                        function = 12;
                        break;
                    case '4':
                        // Odd or Even
                        stage = 6;
                        function = 13;
                        break;
                };
                break;
            case 6:
                // Grading System
                do {
                    #ifdef _WIN32
                        system("cls");
                        system("mode con: cols=57 lines=14");
                        system("cls");
                    #else
                        system("clear");
                        system("printf '\033[8;14;57t'");
                        system("clear");
                    #endif
                    // Area Calculator
                    log("[=]---------------------------------------------------[=]\n");
                    log(" |%-19sGrading  System%-19s|\n", "", "");
                    log("[=]---------------------------------------------------[=]\n");
                    log(
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "1" RESET "] Pass or Fail%-31s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "2" RESET "] Grade Calculator%-27s|\n"
                        " |%-53s|\n",
                        "",
                        "", "",
                        "",
                        "", "",
                        ""
                    );
                    log("[=]---------------------------------------------------[=]\n");
                    log("\n");
                    log(YELLOW_T "Choose the number of the function you want to use > " RESET);
                    scanf(" %c", &answer);
                } while (answer != '1' && answer != '2');
                log("\n");
                switch (answer) {
                    case '1':
                        // Pass or Fail
                        stage = 6;
                        function = 14;
                        break;
                    case '2':
                        // Grade Calculator
                        stage = 6;
                        function = 15;
                        break;
                };
                break;
            case 8:
                // Calculator Function System
                do {
                    #ifdef _WIN32
                        system("cls");
                        system("mode con: cols=57 lines=21");
                        system("cls");
                    #else
                        system("clear");
                        system("printf '\033[8;21;57t'");
                        system("clear");
                    #endif
                    // Area Calculator
                    log("[=]---------------------------------------------------[=]\n");
                    log(" |%-13sCalculator Function  System%-13s|\n", "", "");
                    log("[=]---------------------------------------------------[=]\n");
                    log(
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "1" RESET "] Exponential%-32s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "2" RESET "] Multiplication%-29s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "3" RESET "] Division%-35s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "4" RESET "] Addition%-35s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "5" RESET "] Subtraction%-32s|\n"
                        " |%-53s|\n",
                        "",
                        "", "",
                        "",
                        "", "",
                        "",
                        "", "",
                        "",
                        "", "",
                        "",
                        "", "",
                        ""
                    );
                    log("[=]---------------------------------------------------[=]\n");
                    log("\n");
                    log(YELLOW_T "Choose the number of the function you want to use > " RESET);
                    scanf(" %c", &answer);
                } while (answer != '1' && answer != '2' && answer != '3' && answer != '4' && answer != '5');
                switch (answer) {
                    case '1':
                        // Exponential
                        stage = 6;
                        function = 17;
                        break;
                    case '2':
                        // Multiplication
                        stage = 6;
                        function = 18;
                        break;
                    case '3':
                        // Division
                        stage = 6;
                        function = 19;
                        break;
                    case '4':
                        // Addition
                        stage = 6;
                        function = 20;
                        break;
                    case '5':
                        // Subtraction
                        stage = 6;
                        function = 21;
                        break;
                };
                break;
            case 9:
                // Temperature
                do {
                    #ifdef _WIN32
                        system("cls");
                        system("mode con: cols=57 lines=14");
                        system("cls");
                    #else
                        system("clear");
                        system("printf '\033[8;14;57t'");
                        system("clear");
                    #endif
                    log("[=]---------------------------------------------------[=]\n");
                    log(" |%-21sTemperature%-21s|\n", "", "");
                    log("[=]---------------------------------------------------[=]\n");
                    log(
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "1" RESET "] Fahrenheit to Celsius%-22s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "2" RESET "] Celsius to Fahrenheit%-22s|\n"
                        " |%-53s|\n",
                        "",
                        "", "",
                        "",
                        "", "",
                        ""
                    );
                    log("[=]---------------------------------------------------[=]\n");
                    log("\n");
                    log(YELLOW_T "Choose the number of the function you want to use > " RESET);
                    scanf(" %c", &answer);
                } while (answer != '1' && answer != '2');
                switch (answer) {
                    case '1':
                        // Fahrenheit to Celsius
                        stage = 6;
                        function = 5;
                        break;
                    case '2':
                        // Celsius to Fahrenheit
                        stage = 6;
                        function = 6;
                        break;
                };
                break;
            case 10:
                // Increment and Decrement
                do {
                    #ifdef _WIN32
                        system("cls");
                        system("mode con: cols=57 lines=19");
                        system("cls");
                    #else
                        system("clear");
                        system("printf '\033[8;19;57t'");
                        system("clear");
                    #endif
                    // Increment and Decrement
                    log("[=]---------------------------------------------------[=]\n");
                    log(" |%-15sIncrement and Decrement%-15s|\n", "", "");
                    log("[=]---------------------------------------------------[=]\n");
                    log(
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "1" RESET "] Pre-Increment%-30s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "2" RESET "] Post-Increment%-29s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "3" RESET "] Pre-Decrement%-30s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "4" RESET "] Post-Decrement%-29s|\n"
                        " |%-53s|\n",
                        "",
                        "", "",
                        "",
                        "", "",
                        "",
                        "", "",
                        "",
                        "", "",
                        ""
                    );
                    log("[=]---------------------------------------------------[=]\n");
                    log("\n");
                    log(YELLOW_T "Choose the number of the function you want to use > " RESET);
                    scanf(" %c", &answer);
                } while (answer != '1' && answer != '2' && answer != '3' && answer != '4');
                switch (answer) {
                    case '1':
                        // Pre-Increment
                        stage = 6;
                        function = 22;
                        break;
                    case '2':
                        // Post-Increment
                        stage = 6;
                        function = 23;
                        break;
                    case '3':
                        // Pre-Decrement
                        stage = 6;
                        function = 24;
                        break;
                    case '4':
                        // Post-Decrement
                        stage = 6;
                        function = 25;
                        break;
                };
                break;
            case 11:
                // Operators
                do {
                    #ifdef _WIN32
                        system("cls");
                        system("mode con: cols=57 lines=14");
                        system("cls");
                    #else
                        system("clear");
                        system("printf '\033[8;14;57t'");
                        system("clear");
                    #endif
                    // Operators
                    log("[=]---------------------------------------------------[=]\n");
                    log(" |%-22sOperators%-22s|\n", "", "");
                    log("[=]---------------------------------------------------[=]\n");
                    log(
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "1" RESET "] Logical Operator%-27s|\n"
                        " |%-53s|\n"
                        " |%-6s[" LIME_T "2" RESET "] Relational Operator%-24s|\n"
                        " |%-53s|\n",
                        "",
                        "", "",
                        "",
                        "", "",
                        ""
                    );
                    log("[=]---------------------------------------------------[=]\n");
                    log("\n");
                    log(YELLOW_T "Choose the number of the function you want to use > " RESET);
                    scanf(" %c", &answer);
                } while (answer != '1' && answer != '2');
                switch (answer) {
                    case '1':
                        // Logical Operator
                        stage = 6;
                        function = 26;
                        break;
                    case '2':
                        // Relational Operator
                        stage = 6;
                        function = 27;
                        break;
                };
                break;
        };
        main();
    } else if (stage == 6) {
        #ifdef _WIN32
            system("cls");
            system("mode con: cols=100 lines=50");
            system("cls");
        #else
            system("clear");
            system("printf '\033[8;50;100t'");
            system("clear");
        #endif
        log("\n");
        log("Stage 6\n");
        log("Function: %d\n", function);
        log("\n");
        char useAgain = 'y';
        char goToMainMenu;
        switch (function) {
            case 1:
                // Area of Triangle
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Area of Triangle\n");
                    log("\n");

                    float b, h ,A;
                    log("\tEnter the value lenght of the base: ");
                    scanf(" %f", &b);
                    log("\tEnter the value height of the triangle: ");
                    scanf(" %f", &h);
                    A = (b * h) / 2;          // Area = (base * height) / 2

                    log("The value of area is %f", A);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 2:
                // Area of Rectangle
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Area of Rectangle\n");
                    log("\n");

                    float radius, area;
                    log("\tEnter the radius of the circle: ");
                    scanf("%f", &radius);

                    // Calculate the area of the circle using the formula
                    // area = pi * radius^2
                    area = 3.141592653 * (radius * radius);

                    log("The area of the circle is: %f\n", area);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 3:
                // Area of Rectangle
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Area of Rectangle\n");
                    log("\n");

                    float l, w, area;
                    log("\tEnter the length of the rectangle: ");
                    scanf("%f", &l);
                    log("\tEnter the width of the rectangle: ");
                    scanf("%f", &w);

                    // Calculate the area of the rectangle using the formula
                    // area = length * width
                    area = l * w;

                    log("The area of the rectangle is: %f\n", area);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 4:
                // Area of Parallelogram
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Area of Parallelogram\n");
                    log("\n");

                    float b, h, area;
                    log("\tEnter the base of the parallelogram: ");
                    scanf("%f", &b);
                    log("\tEnter the height of the parallelogram: ");
                    scanf("%f", &h);

                    // Calculate the area of the parallelogram using the formula
                    // area = base * height
                    area = b * h;

                    log("The area of the parallelogram is: %f\n", area);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');

                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;



            case 5:
                // Fahrenheit to Celsius
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Fahrenheit to Celsius\n");
                    log("\n");

                    float f, c;
                    log("\tEnter the temperature in Fahrenheit: ");
                    scanf("%f", &f);

                    // Calculate the temperature in Celsius using the formula
                    // c = (f - 32) * 5/9
                    c = (f - 32) * 5/9;

                    log("The temperature in Celsius is: %f\n", c);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');

                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 6:
                // Celsius to Fahrenheit
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Celsius to Fahrenheit\n");
                    log("\n");

                    float f, c;
                    log("\tEnter the temperature in Celsius: ");
                    scanf("%f", &c);

                    // Calculate the temperature in Fahrenheit using the formula
                    // f = (c * 9/5) + 32
                    f = (c * 9/5) + 32;

                    log("The temperature in Fahrenheit is: %f\n", f);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');

                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;



            case 7:
                // Fraction to Whole Number
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Fraction to Whole Number\n");
                    log("\n");

                    int n, d, w;
                    log("\tEnter the numerator: ");
                    scanf(" %d", &n);
                    log("\tEnter the denominator: ");
                    scanf(" %d", &d);

                    // Calculate the whole number using the formula
                    // w = numerator / denominator
                    w = n / d;

                    log("The whole number is: %d\n", w);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;



            case 8:
                // Color Selection
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Color Selection\n");
                    log("\n");
                    char color;
                    log("\tEnter a color: ");
                    scanf(" %c", &color);

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

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;



            case 9:
                // Resume Creating System
                do {
                    #ifdef _WIN32
                        system("cls");
                        system("mode con: cols=73 lines=50");
                        system("cls");
                    #else
                        system("clear");
                        system("printf '\033[8;50;73t'");
                        system("clear");
                    #endif

                    char contact[50], name[50], birthday[50], address[50], email[50], citizenship[50], fatherName[50], motherName[50], primarySchool[50], secondarySchool[50], tertiarySchool[50], firstChoice[50], secondChoice[50], thirdChoice[50];
                    int age;

                    log("--------------------------- REGISTRATION FORM ---------------------------\n\n");
                    log("NAME: ");
                    scanf(" %50[^\n]", name);
                    log("AGE: ");
                    scanf(" %d", &age);
                    log("BIRTHDAY: ");
                    scanf(" %50[^\n]", birthday);
                    log("ADDRESS: ");
                    scanf(" %50[^\n]", address);
                    log("CONTACT NO.: ");
                    scanf(" %50[^\n]", contact);
                    log("EMAIL: ");
                    scanf(" %50[^\n]", email);
                    log("CITIZENSHIP: ");
                    scanf(" %50[^\n]", citizenship);
                    log("FATHER'S NAME: ");
                    scanf(" %50[^\n]", fatherName);
                    log("MOTHER'S NAME: ");
                    scanf(" %50[^\n]", motherName);

                    log("-------------------------- EDUCATIONAL ATTAINMENT -----------------------\n");
                    log("\n");
                    log("\n");
                    log("PRIMARY: ");
                    scanf(" %50[^\n]", primarySchool);
                    log("SECONDARY: ");
                    scanf(" %50[^\n]", secondarySchool);
                    log("TERTIARY: ");
                    scanf(" %50[^\n]", tertiarySchool);
                    log("\n");
                    log("1ST CHOICE: ");
                    scanf(" %50[^\n]", firstChoice);
                    log("2ND CHOICE: ");
                    scanf(" %50[^\n]", secondChoice);
                    log("3RD CHOICE: ");
                    scanf(" %50[^\n]", thirdChoice);

                    
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("--------------------------- REGISTRATION FORM ---------------------------\n");
                    log("\n");
                    log("Name: %s\n", name);
                    log("\n");
                    log("Age: %d\n", age);
                    log("\n");
                    log("Birthday: %s\n", birthday);
                    log("\n");
                    log("Address: %s\n", address);
                    log("\n");
                    log("Contact: %s\n", contact);
                    log("\n");
                    log("Email: %s\n", email);
                    log("\n");
                    log("Citizenship: %s\n", citizenship);
                    log("\n");
                    log("Father's name: %s\n", fatherName);
                    log("\n");
                    log("Mother's name: %s\n", motherName);
                    log("\n");
                    log("-------------------------- EDUCATIONAL ATTAINMENT -----------------------\n");
                    log("\n");
                    log("Primary: %s\n", primarySchool);
                    log("\n");
                    log("Secondary: %s\n", secondarySchool);
                    log("\n");
                    log("Tertiary: %s\n", tertiarySchool);
                    log("\n");
                    log("\n");
                    log("First choice: %s\n", firstChoice);
                    log("\n");
                    log("Second choice: %s\n", secondChoice);
                    log("\n");
                    log("Third choice: %s\n", thirdChoice);
                    log("\n");
                    log("-------------------------------------------------------------------------\n");

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;



            case 10:
                // Positive or Negative
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Positive or Negative\n");
                    log("\n");

                    int number;
                    log("\tInput a number: ");
                    scanf(" %d", &number);

                    log("\n");
                    if (number > 0) {
                        log("\tThe number is positive.\n");
                    } else if (number < 0) {
                        log("\tThe number is negative.\n");
                    } else {
                        log("\tThe number is zero.\n");
                    };

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 11:
                // Age Qualified Voting
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Age Qualified Voting\n");
                    log("\n");

                    int age;
                    log("\tInput your age: ");
                    scanf(" %d", &age);

                    log("\n");
                    if (age >= 18) {
                        log("\tYou are eligible to vote.\n");
                    } else {
                        log("\tYou are not eligible to vote.\n");
                    };

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 12:
                // Two Numbers Comparison
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Two Numbers Comparison\n");
                    log("\n");
                    int A, B;

                    log("\tEnter value of A: ");
                    scanf(" %d", &A);

                    log("\tEnter value of B: ");
                    scanf(" %d", &B);

                    log("\n");
                    if (A > B) {
                        log("\t%d is greater than %d", A, B);
                    };
                    if (B > A) {
                        log("\t%d is greater than %d", B, A);
                    };

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 13:
                // Odd or Even
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Odd or Even\n");
                    log("\n");

                    int number;
                    log("\tInput a number: ");
                    scanf(" %d", &number);

                    log("\n");
                    if (number % 2 == 0) {
                        log("\tThe number is even.\n");
                    } else {
                        log("\tThe number is odd.\n");
                    };

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;



            case 14:
                // Pass or Failed
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Pass or Failed\n");
                    log("\n");

                    float G;
                    char P[] = "You passed! Congratulations!";
                    char F[] = "You failed! Better luck next time!";

                    log("\tEnter grade: ");
                    scanf(" %f", &G);

                    log("\n");
                    if (G >= 75) {
                        log("\t%s", P);
                    } else {
                        log("\t%s", F);
                    };

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 15:
                // Grade Calculator
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Grade Calculator\n");
                    log("\n");

                    float grade;
                    log("\tEnter your grade: ");
                    scanf(" %f", &grade);

                    if (grade >= 90 && grade <= 100) {
                        log("\tYou got an A!");
                    } else if (grade >= 80 && grade < 90) {
                        log("\tYou got a B!");
                    } else if (grade >= 70 && grade < 80) {
                        log("\tYou got a C!");
                    } else if (grade >= 60 && grade < 70) {
                        log("\tYou got a D!");
                    } else if (grade >= 0 && grade < 60) {
                        log("\tYou got an F!");
                    } else {
                        log("\tOut of range!");
                    };

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;

            case 16:
                // Simple C Quiz
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    // Introduction
                    log(BLUE_T "Welcome to the Simple C Quiz!\n" RESET);
                    log("This quiz will test your knowledge on the C programming language.\n");
                    log("All of your " GREEN_T "answers must be in UPPERCASE" RESET " only.\n");
                    log("\n");

                    // Getting the user's name and section
                    char name[100];
                    char section[20];
                    log("Enter your name: ");
                    scanf(" %100[^\n]", name);
                    log("\n");
                    log("Enter your section: ");
                    scanf(" %20[^\n]", section);

                    // Clearing the screen
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    // Initialization of the score
                    int part1_score = 0,
                        part2_score = 0,
                        total_score;

                    // All of the questions
                    char part1_question1[210] = " 1. Who is the father of C Progmramming Language?\n\tA. DENNIS RITCHIE\n\tB. MARIAN RIVERA\n\tC. DENNIS RITCHEI\n\tD. DENNIS RITCHEESE\n",
                        part1_question2[210] = " 2. What year does C language was first developed?\n\tA. 1872\n\tB. 1972\n\tC. 1892\n\tD. 1982\n",
                        part1_question3[210] = " 3. It reads the entire program and converts it into a form that can be executed by the computer.\n\tA. LIBRARY\n\tB. RUN TIME\n\tC. INTERPRETER\n\tD. COMPILER\n",
                        part1_question4[210] = " 4. Refer to the event that occur while the program is actually executing.\n\tA. INTERPRETER TIME\n\tB. SWITCH TIME\n\tC. COMPILE TIME\n\tD. RUN TIME\n",
                        part1_question5[210] = " 5. A line character that is used to move the cursor to the next line.\n\tA. %%\n\tB. \\n\n\tC. \"\"\n\tD. &\n",
                        part1_question6[210] = " 6. It is used to identify the input, process, and output function.\n\tA. BLUEPRINT\n\tB. DEFINE DIRECTIVES\n\tC. FLOWCHARTING\n\tD. PREPARATION\n",
                        part1_question7[210] = " 7. Program statement used for handling data from the user\n\tA. INPUT STATEMENT\n\tB. OUTPUT STATEMENT\n\tC. INSIDE INPUT\n\tD. OUTSIDE STATEMENT\n",
                        part1_question8[210] = " 8. One of the types of variables that change their value after processing.\n\tA. FATAL VARIABLE\n\tB. DESTRUCTIVE VARIABLE\n\tC. DEVASTATIVE VARIABLE\n\tD. DEDUCTIVE VARIABLE\n",
                        part1_question9[210] = " 9. In the arithmetic-logic unit (which is within the CPU), mathematical operation like: addition, subtraction, multiplication, and division are done.\n\tA. HITLEVEL\n\tB. GIT LEVEL\n\tC. BIT LEVEL\n\tD. KIIT\n",
                        part1_question10[210] = "10. Used for the computer to choose one and only one of the given choices.\n\tA. TEMPORIZE IF STATEMENT\n\tB. LINEARIZE IF ELSE IF STATEMENT\n\tC. NESTED STATEMENT\n\tD. LADDERIZED IF ELSE IF STATEMENT\n",

                        part2_question1[210] = " 1. A primary storage location that can hold different numeric or alphanumeric values.\n",
                        part2_question2[210] = " 2. A finite set of instructions that specify a sequence of operations to be carried out in order to solve a specific problem or class of problems.\n",
                        part2_question3[210] = " 3. A logical operator that if both the operands are non-zero, then the condition becomes true.\n",
                        part2_question4[210] = " 4. In this conditional statement, there are two given choices the computer could make. Futhermore, the computer could only choose one of them.\n",
                        part2_question5[210] = " 5. It is used for testing program and locating programming errors.\n",
                        part2_question6[210] = " 6. It represents text, computer processor instructions, or any other data using a two-symbol system.\n",
                        part2_question7[210] = " 7. If any of the two operands is non-zero, then the condition becomes true.\n",
                        part2_question8[210] = " 8. Variables that maintain its value after processing.\n",
                        part2_question9[210] = " 9. Used to display the argument list on the monitor.\n",
                        part2_question10[210] = "10. A programming language construct or operator that tests or defines some kind of relation between two entities.\n";

                    // All of the answers for all of the questions
                    char part1_answer1 = 'A',
                        part1_answer2 = 'B',
                        part1_answer3 = 'D',
                        part1_answer4 = 'D',
                        part1_answer5 = 'B',
                        part1_answer6 = 'C',
                        part1_answer7 = 'A',
                        part1_answer8 = 'B',
                        part1_answer9 = 'C',
                        part1_answer10 = 'D',

                        part2_answer1[50] = "VARIABLE",
                        part2_answer2[50] = "ALGORITHM",
                        part2_answer3[50] = "AND",
                        part2_answer4[50] = "SIMPLE IF ELSE STATEMENT",
                        part2_answer5[50] = "DEBUGGER",
                        part2_answer6[50] = "BINARY CODE",
                        part2_answer7[50] = "OR",
                        part2_answer8[50] = "CONSTRUCTIVE VARIABLE",
                        part2_answer9[50] = "OUTPUT STATEMENT",
                        part2_answer10[50] = "RELATIONAL OPERATIONS";
                    // All of the responses for all of the questions
                    char part1_response1,
                        part1_response2,
                        part1_response3,
                        part1_response4,
                        part1_response5,
                        part1_response6,
                        part1_response7,
                        part1_response8,
                        part1_response9,
                        part1_response10,

                        part2_response1[50],
                        part2_response2[50],
                        part2_response3[50],
                        part2_response4[50],
                        part2_response5[50],
                        part2_response6[50],
                        part2_response7[50],
                        part2_response8[50],
                        part2_response9[50],
                        part2_response10[50];

                    // Instructions
                    log("Part 1: Multiple Choice\n");
                    log("All of your " GREEN_T "answers must be in uppercase" RESET " only.\n\n");

                    // Part 1
                    log("%s", part1_question1);
                    log("Your answer: ");
                    scanf(" %c", &part1_response1);
                    if (part1_response1 == part1_answer1) {
                        log("The answer " GREEN_T "%c" RESET " is correct!\n", part1_response1);
                        part1_score++;
                    } else {
                        log("The answer " RED_T "%c" RESET " is incorrect!\n", part1_response1);
                    }; log("\n");
                    log("%s", part1_question2);
                    log("Your answer: ");
                    scanf(" %c", &part1_response2);
                    if (part1_response2 == part1_answer2) {
                        log("The answer " GREEN_T "%c" RESET " is correct!\n", part1_response2);
                        part1_score++;
                    } else {
                        log("The answer " RED_T "%c" RESET " is incorrect!\n", part1_response2);
                    }; log("\n");
                    log("%s", part1_question3);
                    log("Your answer: ");
                    scanf(" %c", &part1_response3);
                    if (part1_response3 == part1_answer3) {
                        log("The answer " GREEN_T "%c" RESET " is correct!\n", part1_response3);
                        part1_score++;
                    } else {
                        log("The answer " RED_T "%c" RESET " is incorrect!\n", part1_response3);
                    }; log("\n");
                    log("%s", part1_question4);
                    log("Your answer: ");
                    scanf(" %c", &part1_response4);
                    if (part1_response4 == part1_answer4) {
                        log("The answer " GREEN_T "%c" RESET " is correct!\n", part1_response4);
                        part1_score++;
                    } else {
                        log("The answer " RED_T "%c" RESET " is incorrect!\n", part1_response4);
                    }; log("\n");
                    log("%s", part1_question5);
                    log("Your answer: ");
                    scanf(" %c", &part1_response5);
                    if (part1_response5 == part1_answer5) {
                        log("The answer " GREEN_T "%c" RESET " is correct!\n", part1_response5);
                        part1_score++;
                    } else {
                        log("The answer " RED_T "%c" RESET " is incorrect!\n", part1_response5);
                    }; log("\n");
                    log("%s", part1_question6);
                    log("Your answer: ");
                    scanf(" %c", &part1_response6);
                    if (part1_response6 == part1_answer6) {
                        log("The answer " GREEN_T "%c" RESET " is correct!\n", part1_response6);
                        part1_score++;
                    } else {
                        log("The answer " RED_T "%c" RESET " is incorrect!\n", part1_response6);
                    }; log("\n");
                    log("%s", part1_question7);
                    log("Your answer: ");
                    scanf(" %c", &part1_response7);
                    if (part1_response7 == part1_answer7) {
                        log("The answer " GREEN_T "%c" RESET " is correct!\n", part1_response7);
                        part1_score++;
                    } else {
                        log("The answer " RED_T "%c" RESET " is incorrect!\n", part1_response7);
                    }; log("\n");
                    log("%s", part1_question8);
                    log("Your answer: ");
                    scanf(" %c", &part1_response8);
                    if (part1_response8 == part1_answer8) {
                        log("The answer " GREEN_T "%c" RESET " is correct!\n", part1_response8);
                        part1_score++;
                    } else {
                        log("The answer " RED_T "%c" RESET " is incorrect!\n", part1_response8);
                    }; log("\n");
                    log("%s", part1_question9);
                    log("Your answer: ");
                    scanf(" %c", &part1_response9);
                    if (part1_response9 == part1_answer9) {
                        log("The answer " GREEN_T "%c" RESET " is correct!\n", part1_response9);
                        part1_score++;
                    } else {
                        log("The answer " RED_T "%c" RESET " is incorrect!\n", part1_response9);
                    }; log("\n");
                    log("%s", part1_question10);
                    log("Your answer: ");
                    scanf(" %c", &part1_response10);
                    if (part1_response10 == part1_answer10) {
                        log("The answer " GREEN_T "%c" RESET " is correct!\n", part1_response10);
                        part1_score++;
                    } else {
                        log("The answer " RED_T "%c" RESET " is incorrect!\n", part1_response10);
                    }; log("\n");

                    // Clearing the screen
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    // Instructions
                    log("Part 2: Identification\n");
                    log("All of your " GREEN_T "answers must be in uppercase" RESET " only.\n\n");

                    // Part 2
                    log("%s", part2_question1);
                    log("Your answer: ");
                    scanf(" %50[^\n]", part2_response1);
                    if (strcmp(part2_response1, part2_answer1) == 0) {
                        log("The answer " GREEN_T "%s" RESET " is correct!\n", part2_response1);
                        part2_score++;
                    } else {
                        log("The answer " RED_T "%s" RESET " is incorrect!\n", part2_response1);
                    }; log("\n");
                    log("%s", part2_question2);
                    log("Your answer: ");
                    scanf(" %50[^\n]", part2_response2);
                    if (strcmp(part2_response2, part2_answer2) == 0) {
                        log("The answer " GREEN_T "%s" RESET " is correct!\n", part2_response2);
                        part2_score++;
                    } else {
                        log("The answer " RED_T "%s" RESET " is incorrect!\n", part2_response2);
                    }; log("\n");
                    log("%s", part2_question3);
                    log("Your answer: ");
                    scanf(" %50[^\n]", part2_response3);
                    if (strcmp(part2_response3, part2_answer3) == 0) {
                        log("The answer " GREEN_T "%s" RESET " is correct!\n", part2_response3);
                        part2_score++;
                    } else {
                        log("The answer " RED_T "%s" RESET " is incorrect!\n", part2_response3);
                    }; log("\n");
                    log("%s", part2_question4);
                    log("Your answer: ");
                    scanf(" %50[^\n]", part2_response4);
                    if (strcmp(part2_response4, part2_answer4) == 0) {
                        log("The answer " GREEN_T "%s" RESET " is correct!\n", part2_response4);
                        part2_score++;
                    } else {
                        log("The answer " RED_T "%s" RESET " is incorrect!\n", part2_response4);
                    }; log("\n");
                    log("%s", part2_question5);
                    log("Your answer: ");
                    scanf(" %50[^\n]", part2_response5);
                    if (strcmp(part2_response5, part2_answer5) == 0) {
                        log("The answer " GREEN_T "%s" RESET " is correct!\n", part2_response5);
                        part2_score++;
                    } else {
                        log("The answer " RED_T "%s" RESET " is incorrect!\n", part2_response5);
                    }; log("\n");
                    log("%s", part2_question6);
                    log("Your answer: ");
                    scanf(" %50[^\n]", part2_response6);
                    if (strcmp(part2_response6, part2_answer6) == 0) {
                        log("The answer " GREEN_T "%s" RESET " is correct!\n", part2_response6);
                        part2_score++;
                    } else {
                        log("The answer " RED_T "%s" RESET " is incorrect!\n", part2_response6);
                    }; log("\n");
                    log("%s", part2_question7);
                    log("Your answer: ");
                    scanf(" %50[^\n]", part2_response7);
                    if (strcmp(part2_response7, part2_answer7) == 0) {
                        log("The answer " GREEN_T "%s" RESET " is correct!\n", part2_response7);
                        part2_score++;
                    } else {
                        log("The answer " RED_T "%s" RESET " is incorrect!\n", part2_response7);
                    }; log("\n");
                    log("%s", part2_question8);
                    log("Your answer: ");
                    scanf(" %50[^\n]", part2_response8);
                    if (strcmp(part2_response8, part2_answer8) == 0) {
                        log("The answer " GREEN_T "%s" RESET " is correct!\n", part2_response8);
                        part2_score++;
                    } else {
                        log("The answer " RED_T "%s" RESET " is incorrect!\n", part2_response8);
                    }; log("\n");
                    log("%s", part2_question9);
                    log("Your answer: ");
                    scanf(" %50[^\n]", part2_response9);
                    if (strcmp(part2_response9, part2_answer9) == 0) {
                        log("The answer " GREEN_T "%s" RESET " is correct!\n", part2_response9);
                        part2_score++;
                    } else {
                        log("The answer " RED_T "%s" RESET " is incorrect!\n", part2_response9);
                    }; log("\n");
                    log("%s", part2_question10);
                    log("Your answer: ");
                    scanf(" %50[^\n]", part2_response10);
                    if (strcmp(part2_response10, part2_answer10) == 0) {
                        log("The answer " GREEN_T "%s" RESET " is correct!\n", part2_response10);
                        part2_score++;
                    } else {
                        log("The answer " RED_T "%s" RESET " is incorrect!\n", part2_response10);
                    }; log("\n");

                    // Total score
                    total_score = part1_score + part2_score;

                    // Clearing the screen
                    #ifdef _WIN32
                        system("cls");
                        system("mode con: cols=42 lines=50");
                        system("cls");
                    #else
                        system("clear");
                        system("printf '\033[8;50;42t'");
                        system("clear");
                    #endif

                    // Show the result into a card form
                    // User's information
                    log("|########################################|\n");
                    log("| Name: " BLUE_T "%-33s" RESET, name);
                    log("|\n", " ");
                    log("| Section: " BLUE_T "%-30s" RESET, section);
                    log("|\n", " ");
                    log("|########################################|\n");
                    log("|                 Result                 |\n");
                    log("|########################################|\n");
                    log("| Part 1:%-32s|\n", "");
                    if (part1_response1 == part1_answer1) {
                        log("|  1. %c  -  ", part1_answer1);
                        log(GREEN_T "Correct" RESET "%-22s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  1. %c  -  ", part1_response1);
                        log(RED_T "Incorrect" RESET "%-20s|\n", "");
                        log("|       Answer: " GREEN_T "%c" RESET,part1_answer1 );
                        log("%-24s|\n", "");
                        log("|%-40s|\n", "");
                    };
                    if (part1_response2 == part1_answer2) {
                        log("|  2. %c  -  ", part1_answer2);
                        log(GREEN_T "Correct" RESET "%-22s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  2. %c  -  ", part1_response2);
                        log(RED_T "Incorrect" RESET "%-20s|\n", "");
                        log("|       Answer: " GREEN_T "%c" RESET,part1_answer2 );
                        log("%-24s|\n", "");
                        log("|%-40s|\n", "");
                    };
                    if (part1_response3 == part1_answer3) {
                        log("|  3. %c  -  ", part1_answer3);
                        log(GREEN_T "Correct" RESET "%-22s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  3. %c  -  ", part1_response3);
                        log(RED_T "Incorrect" RESET "%-20s|\n", "");
                        log("|       Answer: " GREEN_T "%c" RESET,part1_answer3 );
                        log("%-24s|\n", "");
                        log("|%-40s|\n", "");
                    };
                    if (part1_response4 == part1_answer4) {
                        log("|  4. %c  -  ", part1_answer4);
                        log(GREEN_T "Correct" RESET "%-22s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  4. %c  -  ", part1_response4);
                        log(RED_T "Incorrect" RESET "%-20s|\n", "");
                        log("|       Answer: " GREEN_T "%c" RESET,part1_answer4 );
                        log("%-24s|\n", "");
                        log("|%-40s|\n", "");
                    };
                    if (part1_response5 == part1_answer5) {
                        log("|  5. %c  -  ", part1_answer5);
                        log(GREEN_T "Correct" RESET "%-22s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  5. %c  -  ", part1_response5);
                        log(RED_T "Incorrect" RESET "%-20s|\n", "");
                        log("|       Answer: " GREEN_T "%c" RESET,part1_answer5 );
                        log("%-24s|\n", "");
                        log("|%-40s|\n", "");
                    };
                    if (part1_response6 == part1_answer6) {
                        log("|  6. %c  -  ", part1_answer6);
                        log(GREEN_T "Correct" RESET "%-22s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  6. %c  -  ", part1_response6);
                        log(RED_T "Incorrect" RESET "%-20s|\n", "");
                        log("|       Answer: " GREEN_T "%c" RESET,part1_answer6 );
                        log("%-24s|\n", "");
                        log("|%-40s|\n", "");
                    };
                    if (part1_response7 == part1_answer7) {
                        log("|  7. %c  -  ", part1_answer7);
                        log(GREEN_T "Correct" RESET "%-22s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  7. %c  -  ", part1_response7);
                        log(RED_T "Incorrect" RESET "%-20s|\n", "");
                        log("|       Answer: " GREEN_T "%c" RESET,part1_answer7 );
                        log("%-24s|\n", "");
                        log("|%-40s|\n", "");
                    };
                    if (part1_response8 == part1_answer8) {
                        log("|  8. %c  -  ", part1_answer8);
                        log(GREEN_T "Correct" RESET "%-22s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  8. %c  -  ", part1_response8);
                        log(RED_T "Incorrect" RESET "%-20s|\n", "");
                        log("|       Answer: " GREEN_T "%c" RESET,part1_answer8 );
                        log("%-24s|\n", "");
                        log("|%-40s|\n", "");
                    };
                    if (part1_response9 == part1_answer9) {
                        log("|  9. %c  -  ", part1_answer9);
                        log(GREEN_T "Correct" RESET "%-22s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  9. %c  -  ", part1_response9);
                        log(RED_T "Incorrect" RESET "%-20s|\n", "");
                        log("|       Answer: " GREEN_T "%c" RESET,part1_answer9 );
                        log("%-24s|\n", "");
                        log("|%-40s|\n", "");
                    };
                    if (part1_response10 == part1_answer10) {
                        log("| 10. %c  -  ",  part1_answer10);
                        log(GREEN_T "Correct" RESET "%-22s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("| 10. %c  -  ",  part1_response10);
                        log(RED_T "Incorrect" RESET "%-20s|\n", "");
                        log("|       Answer: " GREEN_T "%c" RESET, part1_answer10);
                        log("%-24s|\n", "");
                        log("|%-40s|\n", "");
                    };
                    log("|----------------------------------------|\n");
                    log("| Score: %-32d|\n", part1_score);
                    log("|----------------------------------------|\n");

                    log("| Part 2:%-32s|\n", "");
                    if (strcmp(part2_response1, part2_answer1) == 0) {
                        log("|  1. %-25s", part2_response1);
                        log(GREEN_T "Correct" RESET "%-3s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  1. %-25s", part2_response1);
                        log(RED_T "Incorrect" RESET "%-1s|\n", "");
                        log("|       Answer: " GREEN_T "%-25s" RESET "|\n", part2_answer1);
                        log("|%-40s|\n", "");
                    };
                    if (strcmp(part2_response2, part2_answer2) == 0) {
                        log("|  2. %-25s", part2_response2);
                        log(GREEN_T "Correct" RESET "%-3s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  2. %-25s", part2_response2);
                        log(RED_T "Incorrect" RESET "%-1s|\n", "");
                        log("|       Answer: " GREEN_T "%-25s" RESET "|\n", part2_answer2);
                        log("|%-40s|\n", "");
                    };
                    if (strcmp(part2_response3, part2_answer3) == 0) {
                        log("|  3. %-25s", part2_response3);
                        log(GREEN_T "Correct" RESET "%-3s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  3. %-25s", part2_response3);
                        log(RED_T "Incorrect" RESET "%-1s|\n", "");
                        log("|       Answer: " GREEN_T "%-25s" RESET "|\n", part2_answer3);
                        log("|%-40s|\n", "");
                    };
                    if (strcmp(part2_response4, part2_answer4) == 0) {
                        log("|  4. %-25s", part2_response4);
                        log(GREEN_T "Correct" RESET "%-3s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  4. %-25s", part2_response4);
                        log(RED_T "Incorrect" RESET "%-1s|\n", "");
                        log("|       Answer: " GREEN_T "%-25s" RESET "|\n", part2_answer4);
                        log("|%-40s|\n", "");
                    };
                    if (strcmp(part2_response5, part2_answer5) == 0) {
                        log("|  5. %-25s", part2_response5);
                        log(GREEN_T "Correct" RESET "%-3s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  5. %-25s", part2_response5);
                        log(RED_T "Incorrect" RESET "%-1s|\n", "");
                        log("|       Answer: " GREEN_T "%-25s" RESET "|\n", part2_answer5);
                        log("|%-40s|\n", "");
                    };
                    if (strcmp(part2_response6, part2_answer6) == 0) {
                        log("|  6. %-25s", part2_response6);
                        log(GREEN_T "Correct" RESET "%-3s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  6. %-25s", part2_response6);
                        log(RED_T "Incorrect" RESET "%-1s|\n", "");
                        log("|       Answer: " GREEN_T "%-25s" RESET "|\n", part2_answer6);
                        log("|%-40s|\n", "");
                    };
                    if (strcmp(part2_response7, part2_answer7) == 0) {
                        log("|  7. %-25s", part2_response7);
                        log(GREEN_T "Correct" RESET "%-3s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  7. %-25s", part2_response7);
                        log(RED_T "Incorrect" RESET "%-1s|\n", "");
                        log("|       Answer: " GREEN_T "%-25s" RESET "|\n", part2_answer7);
                        log("|%-40s|\n", "");
                    };
                    if (strcmp(part2_response8, part2_answer8) == 0) {
                        log("|  8. %-25s", part2_response8);
                        log(GREEN_T "Correct" RESET "%-3s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  8. %-25s", part2_response8);
                        log(RED_T "Incorrect" RESET "%-1s|\n", "");
                        log("|       Answer: " GREEN_T "%-25s" RESET "|\n", part2_answer8);
                        log("|%-40s|\n", "");
                    };
                    if (strcmp(part2_response9, part2_answer9) == 0) {
                        log("|  9. %-25s", part2_response9);
                        log(GREEN_T "Correct" RESET "%-3s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("|  9. %-25s", part2_response9);
                        log(RED_T "Incorrect" RESET "%-1s|\n", "");
                        log("|       Answer: " GREEN_T "%-25s" RESET "|\n", part2_answer9);
                        log("|%-40s|\n", "");
                    };
                    if (strcmp(part2_response10, part2_answer10) == 0) {
                        log("| 10. %-25s", part2_response10);
                        log(GREEN_T "Correct" RESET "%-3s|\n", "");
                    } else {
                        log("|%-40s|\n", "");
                        log("| 10. %-25s", part2_response10);
                        log(RED_T "Incorrect" RESET "%-1s|\n", "");
                        log("|       Answer: " GREEN_T "%-25s" RESET "|\n", part2_answer10);
                        log("|%-40s|\n", "");
                    };

                    log("|----------------------------------------|\n");
                    log("| Score: %-32d|\n", part2_score);
                    log("|----------------------------------------|\n");
                    log("|########################################|\n");
                    log("| Total Score: %-26d|\n", total_score);
                    log("|########################################|\n");

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                break;



            case 17:
                // Exponential
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Exponential\n");
                    log("\n");

                    int base, exponent;
                    log("\tInput the base: ");
                    scanf(" %d", &base);
                    log("\tInput the exponent: ");
                    scanf(" %d", &exponent);

                    int result = pow(base, exponent);

                    log("\n");
                    log("The result of %d to the power of %d is: %d\n", base, exponent, result);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 18:
                // Multiplication
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Multiplication\n");
                    log("\n");

                    float num1, num2, result;
                    log("\tInput the first number: ");
                    scanf(" %f", &num1);
                    log("\tInput the second number: ");
                    scanf(" %f", &num2);

                    result = num1 * num2;

                    log("\n");
                    log("The result of %.2f * %.2f is: %.2f\n", num1, num2, result);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 19:
                // Division
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Division\n");
                    log("\n");

                    float num1, num2, result;
                    log("\tInput the first number: ");
                    scanf(" %f", &num1);
                    log("\tInput the second number: ");
                    scanf(" %f", &num2);

                    log("\n");
                    if (num2 == 0) {
                        log("You cannot divide by 0!\n");
                    } else {
                        result = num1 / num2;
                        log("The result of %.2f / %.2f is: %.2f\n", num1, num2, result);
                    };

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 20:
                // Addition
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Addition\n");
                    log("\n");

                    float num1, num2, result;
                    log("\tInput the first number: ");
                    scanf(" %f", &num1);
                    log("\tInput the second number: ");
                    scanf(" %f", &num2);

                    result = num1 + num2;

                    log("\n");
                    log("The result of %.2f + %.2f is: %.2f\n", num1, num2, result);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 21:
                // Subtraction
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Subtraction\n");
                    log("\n");

                    float num1, num2, result;
                    log("\tInput the first number: ");
                    scanf(" %f", &num1);
                    log("\tInput the second number: ");
                    scanf(" %f", &num2);

                    result = num1 - num2;

                    log("\n");
                    log("The result of %.2f - %.2f is: %.2f\n", num1, num2, result);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;

            case 22:
                // Pre-Increment
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Pre-Increment\n");
                    log("\n");

                    int x, y, z;
                    log(" Input the value of X: ");
                    scanf(" %d", &x);
                    log(" Input the value of Y: ");
                    scanf(" %d", &y);
                    log(" Input the value of Z: ");
                    scanf(" %d", &z);

                    // use pre increment operator to update the value by 1
                    ++x;
                    ++y;
                    ++z;
                    log("\n The updated value of X: %d", x);
                    log("\n The updated value of Y: %d", y);
                    log("\n The updated value of Z: %d", z);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 23:
                // Post-Increment
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Post-Increment\n");
                    log("\n");

                    int x, y, z, a, b, c;
                    log(" Input the value of X: ");
                    scanf(" %d", &x);
                    log(" Input the value of Y: ");
                    scanf(" %d", &y);
                    log(" Input the value of Z: ");
                    scanf(" %d", &z);

                    // use post-increment operator to update the value by 1
                    a = x++;
                    b = y++;
                    c = z++;

                    log("\n The updated value of a: %d", a);
                    log("\n The updated value of b: %d", b);
                    log("\n The updated value of c: %d", c);
                    log("\n");
                    log("\n The updated value of X: %d", x);
                    log("\n The updated value of Y: %d", y);
                    log("\n The updated value of Z: %d", z);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 24:
                // Pre-Decrement
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Pre-Decrement\n");
                    log("\n");

                    int x, y, z;
                    log(" Input the value of X: ");
                    scanf(" %d", &x);
                    log(" Input the value of Y: ");
                    scanf(" %d", &y);
                    log(" Input the value of Z: ");
                    scanf(" %d", &z);

                    // use pre increment operator to update the value by 1
                    --x;
                    --y;
                    --z;

                    log("\n The updated value of X: %d", x);
                    log("\n The updated value of Y: %d", y);
                    log("\n The updated value of Z: %d", z);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 25:
                // Post-Decrement
                // Pre-Decrement
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Post-Decrement\n");
                    log("\n");

                    int x, y, z, a, b, c;

                    log("Input the value of X: ");
                    scanf(" %d", &x);
                    log(" Input the value of Y: ");
                    scanf(" %d", &y);
                    log(" Input the value of Z: ");
                    scanf(" %d", &z);

                    // use post-increment operator to update the value by 1
                    a = x--;
                    b = y--;
                    c = z--;

                    log("\n The updated value of a: %d", a);
                    log("\n The updated value of b: %d", b);
                    log("\n The updated value of c: %d", c);
                    log("\n");
                    log("\n The updated value of X: %d", x);
                    log("\n The updated value of Y: %d", y);
                    log("\n The updated value of Z: %d", z);

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;



            case 26:
                // Logical Operator
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Logical Operator\n");
                    log("\n");

                    
                    int x, y, a, b;

                    log("\tInput the value of X: ");
                    scanf(" %d", &x);
                    log("\tInput the value of Y: ");
                    scanf(" %d", &y);
                    log("\tInput the value of A: ");
                    scanf(" %d", &a);
                    log("\tInput the value of B: ");
                    scanf(" %d", &b);

                    if (x < y && a == b) {
                        log("\n");
                        log("x (value: %d) is less tham y (value: %d) AND a (value: %d) is equal to b (value: %d)\n", x, y, a, b);
                    };

                    if (x < y || a == b) {
                        log("\n");
                        log("x (value: %d) is less tham y (value: %d) OR a (value: %d) is equal to b (value: %d)\n", x, y, a, b);
                    };

                    if (!(x > y && a < b)) {
                        log("\n");
                        log("x (value: %d) is not greater than y (value: %d) AND a (value: %d) is not less than b (value: %d)\n", x, y, a, b);
                    };

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
            case 27:
                // Relational Operator
                do {
                    #ifdef _WIN32
                        system("cls");
                    #else
                        system("clear");
                    #endif

                    log("Relational Operator\n");
                    log("\n");

                    int x, y;
                    log("\tInput the value of X: ");
                    scanf(" %d", &x);
                    log("\tInput the value of Y: ");
                    scanf(" %d", &y);

                    if (x == y) {
                        log("\n");
                        log("x (value: %d) is equal to y (value: %d)\n", x, y);
                    };
                    if (x != y) {
                        log("\n");
                        log("x (value: %d) is not equal to y (value: %d)\n", x, y);
                    };
                    if (x > y) {
                        log("\n");
                        log("x (value: %d) is greater than y (value: %d)\n", x, y);
                    };
                    if (x < y) {
                        log("\n");
                        log("x (value: %d) is less than y (value: %d)\n", x, y);
                    };
                    if (x >= y) {
                        log("\n");
                        log("x (value: %d) is greater than or equal to y (value: %d)\n", x, y);
                    };
                    if (x <= y) {
                        log("\n");
                        log("x (value: %d) is less than or equal to y (value: %d)\n", x, y);
                    };

                    log("\n");
                    log("\n");
                    log("Do you want to use this function again? [Y|y|*] > ");
                    scanf(" %c", &useAgain);
                } while (useAgain == 'y' || useAgain == 'Y');
                log("\n");
                log("\n");
                log("Do you want to go to the main menu? [Y|y|*] > ");
                scanf(" %c", &goToMainMenu);
                if (goToMainMenu == 'y' || goToMainMenu == 'Y') {
                    stage = 2;
                    main();
                } else {
                    exit(0);
                };
                break;
        };
    };

    return 0;
};