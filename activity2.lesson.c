/**
 * @author Baynosa, Daniel John
 * @section BSIT-1C
 */

#include <stdio.h>
#include <stdlib.h>

#define log printf

int main() {
    system("title Activity 2");
    log("----- REGISTRATION FORM -----");       log("\n");
    // Full Name
    log("Enter your full name: ");
    char name[103];         scanf(" %103[^\n]", &name);
    // Age
    log("Enter your age: ");
    int age;                scanf(" %d", &age);
    // Birthdate
    log("Enter your birthdate: ");
    char birthdate[30];     scanf(" %30[^\n]", &birthdate);
    // Address
    log("Enter your address: ");
    char address[103];      scanf(" %103[^\n]", &address);
    // Contact Number
    log("Enter your contact number: ");
    char contact[30];       scanf(" %30[^\n]", &contact);
    // Email Address
    log("Enter your email address: ");
    char email[103];        scanf(" %103[^\n]", &email);
    // Citizenship
    log("Enter your citizenship: ");
    char citizenship[103];  scanf(" %103[^\n]", &citizenship);
    // Father's Name
    log("Enter your father's name: ");
    char father[103];       scanf(" %103[^\n]", &father);
    // Mother's Name
    log("Enter your mother's name: ");
    char mother[103];       scanf(" %103[^\n]", &mother);

    log("----- EDUCATIONAL  ATTAINMENT -----");       log("\n");
    // Primary
    log("Enter your primary school: ");
    char primary[300];      scanf(" %300[^\n]", &primary);
    // Secondary
    log("Enter your secondary school: ");
    char secondary[300];    scanf(" %300[^\n]", &secondary);
    // Tertiary
    log("Enter your tertiary school: ");
    char tertiary[300];     scanf(" %300[^\n]", &tertiary);

    // Choices
    log("----- CHOICES -----");       log("\n");
    // Course
    log("Enter your 1st choice of course: ");
    char course1[103];      scanf(" %103[^\n]", &course1);
    log("Enter your 2nd choice of course: ");
    char course2[103];      scanf(" %103[^\n]", &course2);
    log("Enter your 3rd choice of course: ");
    char course3[103];      scanf(" %103[^\n]", &course3);

    system("cls");
    system("color 0f");

    log("[-----]--------------------------------------------------------------------------------------------------------|");     log("\n");
    log("[     ]---------------------------------------- REGISTRATION FORM ---------------------------------------------|");     log("\n");
    log("[-----]--------------------------------------------------------------------------------------------------------|");     log("\n");
    log(" |   |\tName:\t\t\t\t|\t%s",            name);                              log("\n");
    log(" |   |\tAge:\t\t\t\t|\t%d",             age);                               log("\n");
    log(" |   |\tBirthday:\t\t\t|\t%s",          birthdate);                         log("\n");
    log(" |   |\tAddress:\t\t\t|\t%s",           address);                           log("\n");
    log(" |   |\tContact Number:\t\t\t|\t%s",    contact);                           log("\n");
    log(" |   |\tEmail Address:\t\t\t|\t%s",     email);                             log("\n");
    log(" |   |\tCitizenship:\t\t\t|\t%s",       citizenship);                       log("\n");
    log(" |   |\tFather's Name:\t\t\t|\t%s",     father);                            log("\n");
    log(" |   |\tMother's Name:\t\t\t|\t%s",     mother);                            log("\n");
    log(" |   |\t\t\t\t\t|\n");
    log("[-----]--------------------------------------------------------------------------------------------------------|");     log("\n");
    log("[     ]------------------------------------- EDUCATIONAL  ATTAINMENT ------------------------------------------|");     log("\n");
    log("[-----]--------------------------------------------------------------------------------------------------------|");     log("\n");
    log(" |   |\tPrimary:\t\t\t|\t%s",           primary);                           log("\n");
    log(" |   |\tSecondary:\t\t\t|\t%s",         secondary);                         log("\n");
    log(" |   |\tTertiary:\t\t\t|\t%s",          tertiary);                          log("\n");
    log(" |   |\t\t\t\t\t|\n");
    log(" |   |\t1st Choice:\t\t\t|\t%s",        course1);                           log("\n");
    log(" |   |\t2nd Choice:\t\t\t|\t%s",        course2);                           log("\n");
    log(" |   |\t3rd Choice:\t\t\t|\t%s",        course3);                           log("\n");
    log("[-----]--------------------------------------------------------------------------------------------------------|");     log("\n");
    log("[     ]--------------------------------------- END OF REGISTRATION FORM ---------------------------------------|");     log("\n");
    log("[-----]--------------------------------------------------------------------------------------------------------|");     log("\n");

    return 0;
};