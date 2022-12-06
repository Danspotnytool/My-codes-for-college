
#include <stdio.h>
#include <stdlib.h>

#define log printf

void s_println(char *str) {
    log("%s", str); log("\n");
};
void c_println(char c) {
    log("%c", c); log("\n");
};
void i_println(int i) {
    log("%d", i); log("\n");
};
void f_println(float f) {
    log("%f", f); log("\n");
};
void d_println(double d) {
    log("%lf", d); log("\n");
};

#define println(s) \
    _Generic((s), \ char *: s_println, \ char: c_println, \ int: i_println, \ float: f_println, \ double: d_println \
    )(s);

// int main() {
//     log("---------- Input Practice ----------\n");
//     log("\n");
//     // getch();
//     // println("Hello World!");
//     char name[] = "";
//     log("Enter your name: ");
//     scanf("%s", name);
//     log("Hello, %s", name);
// };


#include<stdio.h>

#define p printf
#define s scanf

int main()
{
    char name[50]; // local variable declaration
    p("Please enter your name: ");
    s("%s", &name);
    p("Your name is: %s ", name);
    return 0;
}