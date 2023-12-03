#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << setw(5) << "*\n"
         << setw(6) << "***\n"
         << setw(7) << "*****\n"
         << setw(6) << "***\n"
         << setw(5) << "*\n";

    cout << "********\n*" << setw(9) << "*\n*" << setw(9) << "*\n*" << setw(16) << "*\n********";

    cout << setw(5) << "*\n"
         << setw(5) << "**\n"
         << setw(7) << "***\n"
         << setw(7) << "****\n"
         << setw(7) << "*****";

    cout << setw(6) << "*\n"
         << setw(6) << "**\n"
         << setw(6) << "***\n"
         << setw(5) << "****\n"
         << setw(4) << "*****";

    cout << "*" << setw(8) << "*\n*" << setw(6) << "*\n"
         << setw(6) << "*\n*" << setw(7) << "*\n*" << setw(7) << "*\n";

    return 0;
}
