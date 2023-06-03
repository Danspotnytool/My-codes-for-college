/**
 * @author Baynosa, Daniel John E.
 * @section BSIT - 1F
 */

#include <iostream>



int main()
{
    using std::cout;    using std::cin;
    using std::endl;

    // A program that shows uses of logical and relational operators
    int p, q;
    cout << "Enter value for p: "; cin >> p;
    cout << "Enter value for q: "; cin >> q;

    // Logical operators
    cout << "p AND q: " << (p && q) << endl;
    cout << "p OR q: " << (p || q) << endl;
    cout << "NOT p: " << (!p) << endl;
    cout << "p XOR q: " << (p != q) << endl;
    cout << "p NAND q: " << (!(p && q)) << endl;
    cout << "p NOR q: " << (!(p || q)) << endl;
    cout << "p XNOR q: " << (!(p != q)) << endl;

    // Relational operators
    cout << "p > q: " << (p > q) << endl;
    cout << "p < q: " << (p < q) << endl;
    cout << "p >= q: " << (p >= q) << endl;
    cout << "p <= q: " << (p <= q) << endl;
    cout << "p == q: " << (p == q) << endl;
    cout << "p != q: " << (p != q) << endl;

    cout << "Press any key to continue...";
    cin.get();

    return 0;
};