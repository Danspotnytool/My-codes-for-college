/**
 * @author Baynosa, Daniel John E.
 * @section BSIT - 1F
 */

#include <iostream>



int main() {
    using std::cout;    using std::cin;
    using std::endl;

    cout << "Choices System" << endl;
    cout << "\tA. Calculator" << endl;
    cout << "\tB. Days" << endl;
    cout << "\tC. Pass or Failed" << endl;
    cout << endl;

    char choice;
    cout << "Enter your choice: "; cin >> choice;

    switch (choice) {
        case 'a':
        case 'A':
            // Calculator
            cout << "Calculator" << endl;
            cout << "\t1. Addition" << endl;
            cout << "\t2. Subtraction" << endl;
            cout << "\t3. Multiplication" << endl;
            cout << "\t4. Division" << endl;
            cout << endl;

            int choice, operand1, operand2;
            cout << "Enter your choice: "; cin >> choice;
            cout << endl;
            if (choice < 1 || choice > 4) {
                cout << "Invalid choice" << endl;
                exit(0);
            };

            cout << "Enter two operands" << endl;
            cout << "\tEnter first operand: "; cin >> operand1;
            cout << "\tEnter second operand: "; cin >> operand2;
            cout << endl;

            switch (choice) {
                case 1:
                    cout << "Result: " << (operand1 + operand2) << endl;
                    break;
                case 2:
                    cout << "Result: " << (operand1 - operand2) << endl;
                    break;
                case 3:
                    cout << "Result: " << (operand1 * operand2) << endl;
                    break;
                case 4:
                    cout << "Result: " << (operand1 / operand2) << endl;
                    break;
            };
            break;
        case 'b':
        case 'B':
            // Days
            cout << "Chose a number from 1 to 7" << endl;
            cout << "\t1. ??????" << endl; // Sunday
            cout << "\t2. ??????" << endl; // Monday
            cout << "\t3. ???????" << endl; // Tuesday
            cout << "\t4. ?????????" << endl; // Wednesday
            cout << "\t5. ????????" << endl; // Thursday
            cout << "\t6. ??????" << endl; // Friday
            cout << "\t7. ????????" << endl; // Saturday
            cout << "To see the day that corresponds to the number" << endl;
            cout << endl;

            int day;
            cout << "Enter your choice: "; cin >> day;
            cout << endl;
            if (day < 1 || day > 7) {
                cout << "Invalid choice" << endl;
                exit(0);
            };

            switch (day) {
                case 1:
                    cout << "Sunday" << endl;
                    break;
                case 2:
                    cout << "Monday" << endl;
                    break;
                case 3:
                    cout << "Tuesday" << endl;
                    break;
                case 4:
                    cout << "Wednesday" << endl;
                    break;
                case 5:
                    cout << "Thursday" << endl;
                    break;
                case 6:
                    cout << "Friday" << endl;
                    break;
                case 7:
                    cout << "Saturday" << endl;
                    break;
            };
            break;
        case 'c':
        case 'C':
            // Pass or Failed
            cout << "Pass or Failed" << endl;
            cout << endl;

            int grade;
            cout << "Enter your grade: "; cin >> grade;
            cout << endl;

            if (grade < 0 || grade > 100) {
                cout << "Invalid grade" << endl;
                exit(0);
            };

            if (grade >= 75) {
                cout << "Passed" << endl;
            } else {
                cout << "Failed" << endl;
            };

            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    };
};