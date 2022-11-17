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
#define BLUE    "\x1B[34m"
#define RESET   "\x1B[0m"

int main() {
    // Clearing the screen because the program would not include colors unless the screen is cleared
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

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

    // Calulating the Equivalent Lecture Grade
    lectureGrade =
        (quizGrade * 0.15) +
        (assignmentGrade * 0.15) +
        (projectGrade * 0.2) +
        (classStandingGrade * 0.1) +
        (majorExamGrade * 0.4);

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

    // Prompts
    char promptforQuizGrade[] = "";
    char promptforAssignmentGrade[] = "";
    char promptforProjectGrade[] = "";
    char promptforClassStandingGrade[] = "";
    char promptforMajorExamGrade[] = "";
    // Assigning string to the prompts
        promptforQuizGrade[100] = "| Quiz Grade%-15s: ";
        promptforAssignmentGrade[100] = "| Assignment Grade%-9s: ";
        promptforProjectGrade[100] = "| Project Grade%-12s: ";
        promptforClassStandingGrade[100] = "| Class Standing Grade%-5s: ";
        promptforMajorExamGrade[100] = "| Major Exam Grade%-9s: ";

    // Output prompts
    char quizGradeString[10];
    char assignmentGradeString[10];
    char projectGradeString[10];
    char classStandingGradeString[10];
    char majorExamGradeString[10];
    // Converting the float to string
    // (Ignore the `sprintf` because it's not a part of the task. It's just there for beautiful output)
        sprintf(quizGradeString, "%.2f %%", quizGrade);
        sprintf(assignmentGradeString, "%.2f %%", assignmentGrade);
        sprintf(projectGradeString, "%.2f %%", projectGrade);
        sprintf(classStandingGradeString, "%.2f %%", classStandingGrade);
        sprintf(majorExamGradeString, "%.2f %%", majorExamGrade);

    // Output
    log(promptforQuizGrade, "");
        if (quizGrade >= 75) {
            log(GREEN "%-24s" RESET "|", quizGradeString);
        } else {
            log(RED "%-24s" RESET "|", quizGradeString);
        }; log("\n");
    log(promptforAssignmentGrade, "");
        if (assignmentGrade >= 75) {
            log(GREEN "%-24s" RESET "|", assignmentGradeString);
        } else {
            log(RED "%-24s" RESET "|", assignmentGradeString);
        }; log("\n");
    log(promptforProjectGrade, "");
        if (projectGrade >= 75) {
            log(GREEN "%-24s" RESET "|", projectGradeString);
        } else {
            log(RED "%-24s" RESET "|", projectGradeString);
        }; log("\n");
    log(promptforClassStandingGrade, "");
        if (classStandingGrade >= 75) {
            log(GREEN "%-24s" RESET "|", classStandingGradeString);
        } else {
            log(RED "%-24s" RESET "|", classStandingGradeString);
        }; log("\n");
    log(promptforMajorExamGrade, "");
        if (majorExamGrade >= 75) {
            log(GREEN "%-24s" RESET "|", majorExamGradeString);
        } else {
            log(RED "%-24s" RESET "|", majorExamGradeString);
        }; log("\n");

    log("|----------------------------------------------------|\n");
    char promptforLectureGrade[] = "| Equivalent Lecture Grade%-1s: ";
    char lectureGradeString[10];
        sprintf(lectureGradeString, "%.2f %%", lectureGrade);
    log(promptforLectureGrade, "");
        if (lectureGrade >= 75) {
            log(GREEN "%-24s" RESET "|", lectureGradeString);
        } else {
            log(RED "%-24s" RESET "|", lectureGradeString);
        }; log("\n");

    // Label
    log("|----------------------------------------------------|\n");
    log("| %-19s" GREEN "Passed" RESET " " RED "Failed" RESET "%-19s|\n", "", "");
    log("******************************************************\n");

    return 0;
};