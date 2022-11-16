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
 *      Create a flowchart and a program that will accept Quiz
 *      grade, Assignment grade, Project Grade, Class Standing
 *      grade, and Major Exam grade. After accepting
 *      the inputs the program will calculate and display the
 *      Equivalent Lecture grade where class standing is 10%, Quiz
 *      is 15%, Assignment is 15%, Project is 20%, and Major Exam
 *      is 40%. Then the program will state if the grade is passed or
 *      failed.
 */

#include <stdio.h>
#include <stdlib.h>

#define log printf
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"
#define WHITE   "\x1B[37m"
#define RESET   "\x1B[0m"

int main() {
    log("******************************************************\n");
    log("#              " BLUE "Lecture Grade Calculator" RESET "              #\n");
    log("******************************************************\n");

    // Variable Declaration
    float quizGrade, assignmentGrade, projectGrade, classStandingGrade, majorExamGrade, lectureGrade;

    log("| Fill out the following inputs:\n");

    // Input
    log("| Quiz Grade%-15s: ", "");
    scanf(" %e", &quizGrade);
    log("| Assignment Grade%-9s: ", "");
    scanf(" %e", &assignmentGrade);
    log("| Project Grade%-12s: ", "");
    scanf(" %e", &projectGrade);
    log("| Class Standing Grade%-5s: ", "");
    scanf(" %e", &classStandingGrade);
    log("| Major Exam Grade%-9s: ", "");
    scanf(" %e", &majorExamGrade);

    // Calulating the Equivalent Lecture Grade
    lectureGrade =
        (quizGrade * 0.15) +
        (assignmentGrade * 0.15) +
        (projectGrade * 0.2) +
        (classStandingGrade * 0.1) +
        (majorExamGrade * 0.4);

    // Make sure that all inputs are valid
    // (Less than or equal to 100, and greater than or equal to 0)
    if (!(quizGrade <= 100 && quizGrade >= 0) ||
        !(assignmentGrade <= 100 && assignmentGrade >= 0) ||
        !(projectGrade <= 100 && projectGrade >= 0) ||
        !(classStandingGrade <= 100 && classStandingGrade >= 0) ||
        !(majorExamGrade <= 100 && majorExamGrade >= 0)) {
            fprintf(stderr, "Error: Invalid input. Please try again.\n");
            return 1;
    };
    
    // Clearing the screen
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    // Output
    log("******************************************************\n");
    log("#              " BLUE "Lecture Grade Calculator" RESET "              #\n");
    log("******************************************************\n");
    log("| Quiz Grade%-15s: ", "");
        if (quizGrade >= 75) log(GREEN "%.2f %%" RESET "", quizGrade);
        else log(RED "%.2f %%" RESET "", quizGrade);
    for (int i = 0; i < 22 - snprintf(NULL, 0, "%.2f", quizGrade); i++) log(" ");
    log("|\n");

    log("| Assignment Grade%-9s: ", "");
        if (assignmentGrade >= 75) log(GREEN "%.2f %%" RESET "", assignmentGrade);
        else log(RED "%.2f %%" RESET "", assignmentGrade);
    for (int i = 0; i < 22 - snprintf(NULL, 0, "%.2f", assignmentGrade); i++) log(" ");
    log("|\n");

    log("| Project Grade%-12s: ", "");
        if (projectGrade >= 75) log(GREEN "%.2f %%" RESET "", projectGrade);
        else log(RED "%.2f %%" RESET "", projectGrade);
    for (int i = 0; i < 22 - snprintf(NULL, 0, "%.2f", projectGrade); i++) log(" ");
    log("|\n");

    log("| Class Standing Grade%-5s: ", "");
        if (classStandingGrade >= 75) log(GREEN "%.2f %%" RESET "", classStandingGrade);
        else log(RED "%.2f %%" RESET "", classStandingGrade);
    for (int i = 0; i < 22 - snprintf(NULL, 0, "%.2f", classStandingGrade); i++) log(" ");
    log("|\n");

    log("| Major Exam Grade%-9s: ", "");
        if (majorExamGrade >= 75) log(GREEN "%.2f %%" RESET "", majorExamGrade);
        else log(RED "%.2f %%" RESET "", majorExamGrade);
    for (int i = 0; i < 22 - snprintf(NULL, 0, "%.2f", majorExamGrade); i++) log(" ");
    log("|\n");
    log("******************************************************\n");
    log("# Equivalent Lecture Grade%-1s: ", "");
        if (lectureGrade >= 75) log(GREEN "%.2f %%" RESET "", lectureGrade);
        else log(RED "%.2f %%" RESET "", lectureGrade);
    for (int i = 0; i < 22 - snprintf(NULL, 0, "%.2f", lectureGrade); i++) log(" ");
    log("#\n");
    log("# Remarks%-18s: %-33s#\n", "", lectureGrade >= 75 ? GREEN "Passed" RESET : RED "Failed" RESET);
    log("******************************************************\n");

    return 0;
};