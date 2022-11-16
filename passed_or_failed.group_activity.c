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

int main() {
    log("******************************************************\n");
    log("#              Lecture Grade Calculator              #\n");
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
    log("#              Lecture Grade Calculator              #\n");
    log("******************************************************\n");
    log("| Quiz Grade%-15s: %.2f %%", "", quizGrade);
    for (int i = 0; i < 22 - snprintf(NULL, 0, "%.2f", quizGrade); i++) log(" ");
    log("|\n");

    log("| Assignment Grade%-9s: %.2f %%", "", assignmentGrade);
    for (int i = 0; i < 22 - snprintf(NULL, 0, "%.2f", assignmentGrade); i++) log(" ");
    log("|\n");

    log("| Project Grade%-12s: %.2f %%", "", projectGrade);
    for (int i = 0; i < 22 - snprintf(NULL, 0, "%.2f", projectGrade); i++) log(" ");
    log("|\n");

    log("| Class Standing Grade%-5s: %.2f %%", "", classStandingGrade);
    for (int i = 0; i < 22 - snprintf(NULL, 0, "%.2f", classStandingGrade); i++) log(" ");
    log("|\n");

    log("| Major Exam Grade%-9s: %.2f %%", "", majorExamGrade);
    for (int i = 0; i < 22 - snprintf(NULL, 0, "%.2f", majorExamGrade); i++) log(" ");
    log("|\n");
    log("******************************************************\n");
    log("# Equivalent Lecture Grade%-1s: %.2f %%", "", lectureGrade);
    for (int i = 0; i < 22 - snprintf(NULL, 0, "%.2f", lectureGrade); i++) log(" ");
    log("#\n");
    log("# Remarks%-18s: %-24s#\n", "", lectureGrade >= 75 ? "Passed" : "Failed");
    log("******************************************************\n");

    return 0;
};