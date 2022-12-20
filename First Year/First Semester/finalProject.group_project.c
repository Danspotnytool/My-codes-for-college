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
 * 
 * Increment and Decrement
 *      Pre-Increment (ID: 22)
 *      Post-Decrement (ID: 23)
 *      Pre-Decrement (ID: 24)
 *      Post-Decrement (ID: 25)
 */

// 1 = welcome screen, 2 = main menu, 3 sub menu or category, 4 = sub menu or sub category, 5 = choose function, 6 = function
// Stage 1: The welcome screen
// Stage 2: The main menu
// Stage 3: The sub menu or category
// Stage 4: the menu for Converter. The program would only go to this stage if the Converter was chosen in the stage 3
// Stage 5: All of the catetories
// Stage 6: All of the functions
int stage = 1;
// 1 = area calculator, 2 = converter, 3 = color selection, 4 = resume creating system, 5 = number function, 6 = grading system, 7 = quiz system, 8 = calculator function system, 9 = Temperature Convert, 10 = Increment and Decrement
int category = 0;
// 1 = Area of Triangle, 2 = Area of Circle, 3 = Area of Rectangle, 4 = Area of Parallelogram, 5 = Fahrenheit to Celsius, 6 = Celsius To Fahrenheit, 7 = Fraction to Whole Number, 8 = Color Selection, 9 = Resume Creating System, 10 = Positive or Negative, 11 = Age Qualified Voting, 12 = Two Number Comparision, 13 = Odd or Even, 14 = Pass or Failed, 15 = Grade Calculator, 16 = Quiz System, 17 = Exponential, 18 = Multiplication, 19 = Division, 20 = Addition, 21 = Subtraction, 22 = Pre-Increment, 23 = Post-Decrement, 24 = Pre-Decrement, 25 = Post-Decrement
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
            " |%94s|\n"
            " |%-6s[" LIME_T "9" RESET "] %-84s|\n"
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
            "", "",
            "", "Increment and Decrement",
            "", ""
        );
        log("[=]--------------------------------------------------------------------------------------------[=]\n");
        log("\n");

        log(YELLOW_T "Choose the number of the category you want to use > " RESET);
        char menuAnswer;
        scanf("%c", &menuAnswer);
        category = menuAnswer;
        // convert the char to int
        if (menuAnswer - '0' >= 1 && menuAnswer - '0' <= 9) {
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
                category = 1;
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
                category = 5;
                break;
            case '6':
                stage = 5;
                log("Grading System\n");
                category = 6;
                break;
            case '7':
                stage = 6;
                function = 16;
                log("Quiz System\n");
                break;
            case '8':
                stage = 5;
                log("Calculator Function System\n");
                category = 8;
                break;
            case '9':
                stage = 5;
                log("Increment and Decrement\n");
                category = 10;
                break;
            default:
                break;
        };
        main();
    } else if (stage == 4) {
        #ifdef _WIN32
            system("mode con: cols=55 lines=13");
        #endif
        // Special stage for Converter
        log("\n");
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
                        system("mode con: cols=57 lines=16");
                    #else
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
                        system("mode con: cols=57 lines=16");
                    #else
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
                        system("mode con: cols=57 lines=12");
                    #else
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
                        system("mode con: cols=57 lines=18");
                    #else
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
                        system("mode con: cols=57 lines=12");
                    #else
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
                        system("mode con: cols=57 lines=16");
                    #else
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
        };
        main();
    } else if (stage == 6) {
        log("\n");
        #ifdef _WIN32
            system("cls");
            system("mode con: cols=100 lines=30");
        #else
            system("clear");
        #endif
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
                    log("Enter the value lenght of the base: ");
                    scanf(" %f", &b);
                    log("Enter the value height of the triangle: ");
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
                    log("Enter the radius of the circle: ");
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
                    log("Enter the length of the rectangle: ");
                    scanf("%f", &l);
                    log("Enter the width of the rectangle: ");
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
                    log("Enter the base of the parallelogram: ");
                    scanf("%f", &b);
                    log("Enter the height of the parallelogram: ");
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
                    log("Enter the temperature in Fahrenheit: ");
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
                    log("Enter the temperature in Celsius: ");
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
        };
    };

    return 0;
};