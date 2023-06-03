/**
 * @author Baynosa, Daniel John E.
 * @section BSIT - 1F
 */

#include <iostream>

int main() {
    using std::cout;    using std::cin;
    using std::endl;    using std::string;

    cout << "Grades Calculator" << endl;

    beggining:
        string name;
        cout << "Enter name: "; getline(cin, name);
        cout << endl;

        int fil, eng, math, prog, pe;

        cout << "Enter " << name << "'s grades" << endl;

        fillipino:
            cout << "\tFilipino: "; cin >> fil;
            if (fil < 0 || fil > 100) {
                cout << "Invalid grade" << endl;
                goto fillipino;
            };

        english:
            cout << "\tEnglish: "; cin >> eng;
            if (eng < 0 || eng > 100) {
                cout << "Invalid grade" << endl;
                goto english;
            };

        mathematics:
            cout << "\tMathematics: "; cin >> math;
            if (math < 0 || math > 100) {
                cout << "Invalid grade" << endl;
                goto mathematics;
            };

        programming:
            cout << "\tProgramming: "; cin >> prog;
            if (prog < 0 || prog > 100) {
                cout << "Invalid grade" << endl;
                goto programming;
            };

        physical_education:
            cout << "\tPhysical Education: "; cin >> pe;
            if (pe < 0 || pe > 100) {
                cout << "Invalid grade" << endl;
                goto physical_education;
            };

        int average = (fil + eng + math + prog + pe) / 5;

        cout << name << "'s average is " << average << endl;
        cout << endl;

        if (average >= 75) {
            cout << name << " passed" << endl;
        } else {
            cout << name << " failed" << endl;
        };

        cout << endl;

        char choice;
        cout << "Do you want to enter another?: "; cin >> choice;
        cout << endl;
        if (choice == 'y' || choice == 'Y') {
            goto beggining;
        };

    return 0;
};