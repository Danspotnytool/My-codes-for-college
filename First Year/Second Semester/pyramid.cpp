/**
 * @author Baynosa, Daniel John E.
 * @section BSIT - 1F
 */

#include <iostream>

using namespace std;

/**
 * @param n The starting or current itiration of the building loop
 * @param size The size of the pyramid
 */
void pyramid(int n, const int size)
{
    if (n < size)
    {
        string line = string(size - n, '.') + string((n * 2) - 1, '*') + string(size - n, '.');
        cout << line << endl;
        n++;
        return pyramid(n, size);
    };
    return;
};

int main(int argc, char *argv[])
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    int size = atoi(argv[1]);

    pyramid(1, (size > 0) ? size + 1 : 10);

    return 0;
};