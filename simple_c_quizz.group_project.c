/**
 * @authors Baynosa, Daniel John
 *          Capones, John Mark C.
 *          Dayandayan, Mary Jean
 *          Joya, Acel
 * 
 * @section BSIT-1C
 */

/**
 * Simple C Quiz
 * Flow:
 *      First, initialization of the score
 *
 *      int score = 0;
 *
 *      And then a series of questions with input scanner and if statements:
 *
 *      printf("What language is this program created on?");
 *      char part1_answer1[50];
 *      scanf(" %50[^\n]", &part1_answer1);
 *      if (part1_answer1 == "c" || part1_answer1 == "C") {
 *        printf("The answer %s is correct\n", part1_answer1);
 *         score += 1;
 *      } else {
 *        printf("The answer %s is wrong\n", part1_answer1);
 *      };
 *
 *      After all of the questions, the program will print all of the results
 *
 *      printf("Question: What language is this program created on?\n");
 *      printf("Answer: %s\n", part1_answer1);
 *
 *      And the final score
 *
 *      printf("Total score %d", score);
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define log printf
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define BLUE    "\x1B[34m"
#define RESET   "\x1B[0m"

int main() {
    // Clearing the screen because the program would not include colors unless the screen is cleared
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    // Introduction
    log(BLUE "Welcome to the Simple C Quiz!\n" RESET);
    log("This quiz will test your knowledge on the C programming language.\n");
    log("All of your " GREEN "answers must be in uppercase" RESET " only.\n");
    log("\n");
    log("Press " GREEN "ENTER" RESET " to continue...");
    getchar();

    // Clearing the screen
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

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
        part1_question5[210] = " 5. A line character that is used to move the cursor to the next line.\n\tA. %%\n\tB. \n\n\tC. ""\n\tD. &\n",
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
        part2_question10[210] = " 10. A programming language construct or operator that tests or defines some kind of relation between two entities.\n";

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
    log("All of your " GREEN "answers must be in uppercase" RESET " only.\n\n");

    // Part 1
    log("%s", part1_question1);
    log("Your answer: ");
    scanf(" %c", &part1_response1);
    if (part1_response1 == part1_answer1) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_response1);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_response1);
    }; log("\n");
    log("%s", part1_question2);
    log("Your answer: ");
    scanf(" %c", &part1_response2);
    if (part1_response2 == part1_answer2) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_response2);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_response2);
    }; log("\n");
    log("%s", part1_question3);
    log("Your answer: ");
    scanf(" %c", &part1_response3);
    if (part1_response3 == part1_answer3) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_response3);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_response3);
    }; log("\n");
    log("%s", part1_question4);
    log("Your answer: ");
    scanf(" %c", &part1_response4);
    if (part1_response4 == part1_answer4) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_response4);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_response4);
    }; log("\n");
    log("%s", part1_question5);
    log("Your answer: ");
    scanf(" %c", &part1_response5);
    if (part1_response5 == part1_answer5) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_response5);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_response5);
    }; log("\n");
    log("%s", part1_question6);
    log("Your answer: ");
    scanf(" %c", &part1_response6);
    if (part1_response6 == part1_answer6) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_response6);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_response6);
    }; log("\n");
    log("%s", part1_question7);
    log("Your answer: ");
    scanf(" %c", &part1_response7);
    if (part1_response7 == part1_answer7) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_response7);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_response7);
    }; log("\n");
    log("%s", part1_question8);
    log("Your answer: ");
    scanf(" %c", &part1_response8);
    if (part1_response8 == part1_answer8) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_response8);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_response8);
    }; log("\n");
    log("%s", part1_question9);
    log("Your answer: ");
    scanf(" %c", &part1_response9);
    if (part1_response9 == part1_answer9) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_response9);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_response9);
    }; log("\n");
    log("%s", part1_question10);
    log("Your answer: ");
    scanf(" %c", &part1_response10);
    if (part1_response10 == part1_answer10) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_response10);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_response10);
    }; log("\n");

    // Clearing the screen
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    // Instructions
    log("Part 2: Identification\n");
    log("All of your " GREEN "answers must be in uppercase" RESET " only.\n\n");

    // Part 2
    log("%s", part2_question1);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_response1);
    if (strcmp(part2_response1, part2_answer1) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_response1);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_response1);
    }; log("\n");
    log("%s", part2_question2);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_response2);
    if (strcmp(part2_response2, part2_answer2) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_response2);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_response2);
    }; log("\n");
    log("%s", part2_question3);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_response3);
    if (strcmp(part2_response3, part2_answer3) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_response3);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_response3);
    }; log("\n");
    log("%s", part2_question4);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_response4);
    if (strcmp(part2_response4, part2_answer4) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_response4);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_response4);
    }; log("\n");
    log("%s", part2_question5);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_response5);
    if (strcmp(part2_response5, part2_answer5) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_response5);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_response5);
    }; log("\n");
    log("%s", part2_question6);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_response6);
    if (strcmp(part2_response6, part2_answer6) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_response6);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_response6);
    }; log("\n");
    log("%s", part2_question7);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_response7);
    if (strcmp(part2_response7, part2_answer7) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_response7);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_response7);
    }; log("\n");
    log("%s", part2_question8);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_response8);
    if (strcmp(part2_response8, part2_answer8) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_response8);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_response8);
    }; log("\n");
    log("%s", part2_question9);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_response9);
    if (strcmp(part2_response9, part2_answer9) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_response9);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_response9);
    }; log("\n");
    log("%s", part2_question10);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_response10);
    if (strcmp(part2_response10, part2_answer10) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_response10);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_response10);
    }; log("\n");

    // Total score
    total_score = part1_score + part2_score;

    // Clearing the screen
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    // Show the result into a card form
    // User's information
    log("|########################################|\n");
    log("| Name: " BLUE "%-33s" RESET, name);
    log("|\n", " ");
    log("| Section: " BLUE "%-30s" RESET, section);
    log("|\n", " ");
    log("|########################################|\n");
    log("|                 Result                 |\n");
    log("|########################################|\n");
    log("| Part 1:%-32s|\n", "");
    if (part1_response1 == part1_answer1) {
        log("|  1. %c  -  ", part1_answer1);
        log(GREEN "Correct" RESET "%-22s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  1. %c  -  ", part1_response1);
        log(RED "Incorrect" RESET "%-20s|\n", "");
        log("|       Answer: " GREEN "%c" RESET,part1_answer1 );
        log("%-24s|\n", "");
        log("|%-40s|\n", "");
    };
    if (part1_response2 == part1_answer2) {
        log("|  2. %c  -  ", part1_answer2);
        log(GREEN "Correct" RESET "%-22s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  2. %c  -  ", part1_response2);
        log(RED "Incorrect" RESET "%-20s|\n", "");
        log("|       Answer: " GREEN "%c" RESET,part1_answer2 );
        log("%-24s|\n", "");
        log("|%-40s|\n", "");
    };
    if (part1_response3 == part1_answer3) {
        log("|  3. %c  -  ", part1_answer3);
        log(GREEN "Correct" RESET "%-22s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  3. %c  -  ", part1_response3);
        log(RED "Incorrect" RESET "%-20s|\n", "");
        log("|       Answer: " GREEN "%c" RESET,part1_answer3 );
        log("%-24s|\n", "");
        log("|%-40s|\n", "");
    };
    if (part1_response4 == part1_answer4) {
        log("|  4. %c  -  ", part1_answer4);
        log(GREEN "Correct" RESET "%-22s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  4. %c  -  ", part1_response4);
        log(RED "Incorrect" RESET "%-20s|\n", "");
        log("|       Answer: " GREEN "%c" RESET,part1_answer4 );
        log("%-24s|\n", "");
        log("|%-40s|\n", "");
    };
    if (part1_response5 == part1_answer5) {
        log("|  5. %c  -  ", part1_answer5);
        log(GREEN "Correct" RESET "%-22s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  5. %c  -  ", part1_response5);
        log(RED "Incorrect" RESET "%-20s|\n", "");
        log("|       Answer: " GREEN "%c" RESET,part1_answer5 );
        log("%-24s|\n", "");
        log("|%-40s|\n", "");
    };
    if (part1_response6 == part1_answer6) {
        log("|  6. %c  -  ", part1_answer6);
        log(GREEN "Correct" RESET "%-22s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  6. %c  -  ", part1_response6);
        log(RED "Incorrect" RESET "%-20s|\n", "");
        log("|       Answer: " GREEN "%c" RESET,part1_answer6 );
        log("%-24s|\n", "");
        log("|%-40s|\n", "");
    };
    if (part1_response7 == part1_answer7) {
        log("|  7. %c  -  ", part1_answer7);
        log(GREEN "Correct" RESET "%-22s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  7. %c  -  ", part1_response7);
        log(RED "Incorrect" RESET "%-20s|\n", "");
        log("|       Answer: " GREEN "%c" RESET,part1_answer7 );
        log("%-24s|\n", "");
        log("|%-40s|\n", "");
    };
    if (part1_response8 == part1_answer8) {
        log("|  8. %c  -  ", part1_answer8);
        log(GREEN "Correct" RESET "%-22s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  8. %c  -  ", part1_response8);
        log(RED "Incorrect" RESET "%-20s|\n", "");
        log("|       Answer: " GREEN "%c" RESET,part1_answer8 );
        log("%-24s|\n", "");
        log("|%-40s|\n", "");
    };
    if (part1_response9 == part1_answer9) {
        log("|  9. %c  -  ", part1_answer9);
        log(GREEN "Correct" RESET "%-22s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  9. %c  -  ", part1_response9);
        log(RED "Incorrect" RESET "%-20s|\n", "");
        log("|       Answer: " GREEN "%c" RESET,part1_answer9 );
        log("%-24s|\n", "");
        log("|%-40s|\n", "");
    };
    if (part1_response10 == part1_answer10) {
        log("| 10. %c  -  ",  part1_answer10);
        log(GREEN "Correct" RESET "%-22s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("| 10. %c  -  ",  part1_response10);
        log(RED "Incorrect" RESET "%-20s|\n", "");
        log("|       Answer: " GREEN "%c" RESET, part1_answer10);
        log("%-24s|\n", "");
        log("|%-40s|\n", "");
    };
    log("|----------------------------------------|\n");
    log("| Score: %-32d|\n", part1_score);
    log("|----------------------------------------|\n");

    log("| Part 2:%-32s|\n", "");
    if (strcmp(part2_response1, part2_answer1) == 0) {
        log("|  1. %-25s", part2_response1);
        log(GREEN "Correct" RESET "%-3s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  1. %-25s", part2_response1);
        log(RED "Incorrect" RESET "%-1s|\n", "");
        log("|       Answer: " GREEN "%-25s" RESET "|\n", part2_answer1);
        log("|%-40s|\n", "");
    };
    if (strcmp(part2_response2, part2_answer2) == 0) {
        log("|  2. %-25s", part2_response2);
        log(GREEN "Correct" RESET "%-3s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  2. %-25s", part2_response2);
        log(RED "Incorrect" RESET "%-1s|\n", "");
        log("|       Answer: " GREEN "%-25s" RESET "|\n", part2_answer2);
        log("|%-40s|\n", "");
    };
    if (strcmp(part2_response3, part2_answer3) == 0) {
        log("|  3. %-25s", part2_response3);
        log(GREEN "Correct" RESET "%-3s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  3. %-25s", part2_response3);
        log(RED "Incorrect" RESET "%-1s|\n", "");
        log("|       Answer: " GREEN "%-25s" RESET "|\n", part2_answer3);
        log("|%-40s|\n", "");
    };
    if (strcmp(part2_response4, part2_answer4) == 0) {
        log("|  4. %-25s", part2_response4);
        log(GREEN "Correct" RESET "%-3s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  4. %-25s", part2_response4);
        log(RED "Incorrect" RESET "%-1s|\n", "");
        log("|       Answer: " GREEN "%-25s" RESET "|\n", part2_answer4);
        log("|%-40s|\n", "");
    };
    if (strcmp(part2_response5, part2_answer5) == 0) {
        log("|  5. %-25s", part2_response5);
        log(GREEN "Correct" RESET "%-3s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  5. %-25s", part2_response5);
        log(RED "Incorrect" RESET "%-1s|\n", "");
        log("|       Answer: " GREEN "%-25s" RESET "|\n", part2_answer5);
        log("|%-40s|\n", "");
    };
    if (strcmp(part2_response6, part2_answer6) == 0) {
        log("|  6. %-25s", part2_response6);
        log(GREEN "Correct" RESET "%-3s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  6. %-25s", part2_response6);
        log(RED "Incorrect" RESET "%-1s|\n", "");
        log("|       Answer: " GREEN "%-25s" RESET "|\n", part2_answer6);
        log("|%-40s|\n", "");
    };
    if (strcmp(part2_response7, part2_answer7) == 0) {
        log("|  7. %-25s", part2_response7);
        log(GREEN "Correct" RESET "%-3s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  7. %-25s", part2_response7);
        log(RED "Incorrect" RESET "%-1s|\n", "");
        log("|       Answer: " GREEN "%-25s" RESET "|\n", part2_answer7);
        log("|%-40s|\n", "");
    };
    if (strcmp(part2_response8, part2_answer8) == 0) {
        log("|  8. %-25s", part2_response8);
        log(GREEN "Correct" RESET "%-3s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  8. %-25s", part2_response8);
        log(RED "Incorrect" RESET "%-1s|\n", "");
        log("|       Answer: " GREEN "%-25s" RESET "|\n", part2_answer8);
        log("|%-40s|\n", "");
    };
    if (strcmp(part2_response9, part2_answer9) == 0) {
        log("|  9. %-25s", part2_response9);
        log(GREEN "Correct" RESET "%-3s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("|  9. %-25s", part2_response9);
        log(RED "Incorrect" RESET "%-1s|\n", "");
        log("|       Answer: " GREEN "%-25s" RESET "|\n", part2_answer9);
        log("|%-40s|\n", "");
    };
    if (strcmp(part2_response10, part2_answer10) == 0) {
        log("| 10. %-25s", part2_response10);
        log(GREEN "Correct" RESET "%-3s|\n", "");
    } else {
        log("|%-40s|\n", "");
        log("| 10. %-25s", part2_response10);
        log(RED "Incorrect" RESET "%-1s|\n", "");
        log("|       Answer: " GREEN "%-25s" RESET "|\n", part2_answer10);
        log("|%-40s|\n", "");
    };

    log("|----------------------------------------|\n");
    log("| Score: %-32d|\n", part2_score);
    log("|----------------------------------------|\n");
    log("|########################################|\n");
    log("| Total Score: %-26d|\n", total_score);
    log("|########################################|\n");

    return 0;
};