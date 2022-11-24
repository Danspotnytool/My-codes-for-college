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

    // Initialization of the score
    int part1_score = 0,
        part2_score = 0,
        final_score;

    // All of the questions
    char part1_question1[200] = "Who is the father of C Progmramming Language?\n\tA. DENNIS RITCHIE\n\tB. MARIAN RIVERA\n\tC. DENNIS RITCHEI\n\tD. DENNIS RITCHEESE\n",
        part1_question2[200] = "What year does C language was first developed?\n\tA. 1872\n\tB. 1972\n\tC. 1892\n\tD. 1982\n",
        part1_question3[200] = "It reads the entire program and converts it into a form that can be executed by the computer.\n\tA. LIBRARY\n\tB. RUN TIME\n\tC. INTERPRETER\n\tD. COMPILER\n",
        part1_question4[200] = "Refer to the event that occur while the program is actually executing.\n\tA. INTERPRETER TIME\n\tB. SWITCH TIME\n\tC. COMPILE TIME\n\tD. RUN TIME\n",
        part1_question5[200] = "A line character that is used to move the cursor to the next line.\n\tA. %%\n\tB. \n\n\tC. ""\n\tD. &\n",
        part1_question6[200] = "It is used to identify the input, process, and output function.\n\tA. BLUEPRINT\n\tB. DEFINE DIRECTIVES\n\tC. FLOWCHARTING\n\tD. PREPARATION\n",
        part1_question7[200] = "Program statement used for handling data from the user\n\tA. INPUT STATEMENT\n\tB. OUTPUT STATEMENT\n\tC. INSIDE INPUT\n\tD. OUTSIDE STATEMENT\n",
        part1_question8[200] = "One of the types of variables that change their value after processing.\n\tA. FATAL VARIABLE\n\tB. DESTRUCTIVE VARIABLE\n\tC. DEVASTATIVE VARIABLE\n\tD. DEDUCTIVE VARIABLE\n",
        part1_question9[200] = "In the arithmetic-logic unit (which is within the CPU), mathematical operation like: addition, subtraction, multiplication, and division are done.\n\tA. HITLEVEL\n\tB. GIT LEVEL\n\tC. BIT LEVEL\n\tD. KIIT\n",
        part1_question10[200] = "Used for the computer to choose one and only one of the given choices.\n\tA. TEMPORIZE IF STATEMENT\n\tB. LINEARIZE IF ELSE IF STATEMENT\n\tC. NESTED STATEMENT\n\tD. LADDERIZED IF ELSE IF STATEMENT\n",

        part2_question1[200] = "A primary storage location that can hold different numeric or alphanumeric values.\n",
        part2_question2[200] = "A finite set of instructions that specify a sequence of operations to be carried out in order to solve a specific problem or class of problems.\n",
        part2_question3[200] = "A logical operator that if both the operands are non-zero, then the condition becomes true.\n",
        part2_question4[200] = "In this conditional statement, there are two given choices the computer could make. Futhermore, the computer could only choose one of them.\n",
        part2_question5[200] = "It is used for testing program and locating programming errors.\n",
        part2_question6[200] = "It represents text, computer processor instructions, or any other data using a two-symbol system.\n",
        part2_question7[200] = "If any of the two operands is non-zero, then the condition becomes true.\n",
        part2_question8[200] = "Variables that maintain its value after processing.\n",
        part2_question9[200] = "Used to display the argument list on the monitor.\n",
        part2_question10[200] = "A programming language construct or operator that tests or defines some kind of relation between two entities.\n";

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
    char part1_responce1,
        part1_responce2,
        part1_responce3,
        part1_responce4,
        part1_responce5,
        part1_responce6,
        part1_responce7,
        part1_responce8,
        part1_responce9,
        part1_responce10,

        part2_responce1[50],
        part2_responce2[50],
        part2_responce3[50],
        part2_responce4[50],
        part2_responce5[50],
        part2_responce6[50],
        part2_responce7[50],
        part2_responce8[50],
        part2_responce9[50],
        part2_responce10[50];

    // Instructions
    log("Part 1: Multiple Choice\n");
    log("All of your " GREEN "answers must be in uppercase" RESET " only.\n\n");

    // Part 1
    log("%s", part1_question1);
    log("Your answer: ");
    scanf(" %c", &part1_responce1);
    if (part1_responce1 == part1_answer1) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_responce1);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_responce1);
    }; log("\n");
    log("%s", part1_question2);
    log("Your answer: ");
    scanf(" %c", &part1_responce2);
    if (part1_responce2 == part1_answer2) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_responce2);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_responce2);
    }; log("\n");
    log("%s", part1_question3);
    log("Your answer: ");
    scanf(" %c", &part1_responce3);
    if (part1_responce3 == part1_answer3) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_responce3);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_responce3);
    }; log("\n");
    log("%s", part1_question4);
    log("Your answer: ");
    scanf(" %c", &part1_responce4);
    if (part1_responce4 == part1_answer4) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_responce4);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_responce4);
    }; log("\n");
    log("%s", part1_question5);
    log("Your answer: ");
    scanf(" %c", &part1_responce5);
    if (part1_responce5 == part1_answer5) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_responce5);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_responce5);
    }; log("\n");
    log("%s", part1_question6);
    log("Your answer: ");
    scanf(" %c", &part1_responce6);
    if (part1_responce6 == part1_answer6) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_responce6);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_responce6);
    }; log("\n");
    log("%s", part1_question7);
    log("Your answer: ");
    scanf(" %c", &part1_responce7);
    if (part1_responce7 == part1_answer7) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_responce7);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_responce7);
    }; log("\n");
    log("%s", part1_question8);
    log("Your answer: ");
    scanf(" %c", &part1_responce8);
    if (part1_responce8 == part1_answer8) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_responce8);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_responce8);
    }; log("\n");
    log("%s", part1_question9);
    log("Your answer: ");
    scanf(" %c", &part1_responce9);
    if (part1_responce9 == part1_answer9) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_responce9);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_responce9);
    }; log("\n");
    log("%s", part1_question10);
    log("Your answer: ");
    scanf(" %c", &part1_responce10);
    if (part1_responce10 == part1_answer10) {
        log("The answer " GREEN "%c" RESET " is correct!\n", part1_responce10);
        part1_score++;
    } else {
        log("The answer " RED "%c" RESET " is incorrect!\n", part1_responce10);
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
    scanf(" %50[^\n]", part2_responce1);
    if (strcmp(part2_responce1, part2_answer1) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_responce1);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_responce1);
    }; log("\n");
    log("%s", part2_question2);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_responce2);
    if (strcmp(part2_responce2, part2_answer2) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_responce2);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_responce2);
    }; log("\n");
    log("%s", part2_question3);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_responce3);
    if (strcmp(part2_responce3, part2_answer3) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_responce3);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_responce3);
    }; log("\n");
    log("%s", part2_question4);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_responce4);
    if (strcmp(part2_responce4, part2_answer4) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_responce4);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_responce4);
    }; log("\n");
    log("%s", part2_question5);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_responce5);
    if (strcmp(part2_responce5, part2_answer5) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_responce5);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_responce5);
    }; log("\n");
    log("%s", part2_question6);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_responce6);
    if (strcmp(part2_responce6, part2_answer6) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_responce6);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_responce6);
    }; log("\n");
    log("%s", part2_question7);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_responce7);
    if (strcmp(part2_responce7, part2_answer7) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_responce7);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_responce7);
    }; log("\n");
    log("%s", part2_question8);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_responce8);
    if (strcmp(part2_responce8, part2_answer8) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_responce8);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_responce8);
    }; log("\n");
    log("%s", part2_question9);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_responce9);
    if (strcmp(part2_responce9, part2_answer9) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_responce9);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_responce9);
    }; log("\n");
    log("%s", part2_question10);
    log("Your answer: ");
    scanf(" %50[^\n]", part2_responce10);
    if (strcmp(part2_responce10, part2_answer10) == 0) {
        log("The answer " GREEN "%s" RESET " is correct!\n", part2_responce10);
        part2_score++;
    } else {
        log("The answer " RED "%s" RESET " is incorrect!\n", part2_responce10);
    }; log("\n");

    // Total score
    final_score = part1_score + part2_score;

    // Clearing the screen
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    // Show the result into a card form
    log("|############################|\n");
    log("|           Result           |\n");
    log("|############################|\n");
    log("| Part 1:%-20s|\n", "");
    if (part1_responce1 == part1_answer1) {
        log("|  1. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  1. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (part1_responce2 == part1_answer2) {
        log("|  2. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  2. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (part1_responce3 == part1_answer3) {
        log("|  3. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  3. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (part1_responce4 == part1_answer4) {
        log("|  4. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  4. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (part1_responce5 == part1_answer5) {
        log("|  5. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  5. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (part1_responce6 == part1_answer6) {
        log("|  6. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  6. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (part1_responce7 == part1_answer7) {
        log("|  7. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  7. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (part1_responce8 == part1_answer8) {
        log("|  8. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  8. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (part1_responce9 == part1_answer9) {
        log("|  9. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  9. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (part1_responce10 == part1_answer10) {
        log("| 10. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("| 10. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    log("|----------------------------|\n");
    log("| Total score: %-14d|\n", part1_score);
    log("|----------------------------|\n");

    log("| Part 2:%-20s|\n", "");
    if (strcmp(part2_responce1, part2_answer1) == 0) {
        log("|  1. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  1. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (strcmp(part2_responce2, part2_answer2) == 0) {
        log("|  2. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  2. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (strcmp(part2_responce3, part2_answer3) == 0) {
        log("|  3. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  3. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (strcmp(part2_responce4, part2_answer4) == 0) {
        log("|  4. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  4. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (strcmp(part2_responce5, part2_answer5) == 0) {
        log("|  5. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  5. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (strcmp(part2_responce6, part2_answer6) == 0) {
        log("|  6. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  6. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (strcmp(part2_responce7, part2_answer7) == 0) {
        log("|  7. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  7. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (strcmp(part2_responce8, part2_answer8) == 0) {
        log("|  8. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  8. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (strcmp(part2_responce9, part2_answer9) == 0) {
        log("|  9. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("|  9. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    if (strcmp(part2_responce10, part2_answer10) == 0) {
        log("| 10. " GREEN "Correct" RESET "%-16s|\n", "");
    } else {
        log("| 10. " RED "Incorrect" RESET "%-14s|\n", "");
    };
    log("|----------------------------|\n");
    log("| Total score: %-14d|\n", part2_score);
    log("|############################|\n");
    log("| Final score: %-14d|\n", final_score);
    log("|############################|\n");

    return 0;
};