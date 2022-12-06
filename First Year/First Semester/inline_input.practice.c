
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define log printf

int main() {
    log("Starting the program...\n\n");

    char buffer[256] = "";
    log("Enter your name: ");
    int in;
    while ((in = getch()) != '\r') {
        char out = (char)(in);
        log("%c", out);
        buffer[strlen(buffer)] = out;
        if (strlen(buffer) >= 255) {
            break;
        };
    };
    log(" , You entered: %s", buffer);
    return 0;
};