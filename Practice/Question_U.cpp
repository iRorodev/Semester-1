#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int space = 0;
    int slash = 12;
    int backslash = 0;

    for (int i = 6; i >= 1; i--)
    {

        cout << endl;
        for (int j = 1; j <= i; j++)
            cout << "*";

        space++;

        for (int i = 1; i <= space; i++)
            cout << " ";

        for (int i = 1; i <= slash; i++)
            cout << "/";
        slash = slash - 2;
        for (int i = 1; i <= backslash; i++)
            cout << "\\";
        backslash = backslash + 2;

        for (int i = 1; i <= space; i++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << "*";
    }
    cout<<endl;
    space ++;
    for (int i = 1; i <= space; i++)
        cout << " ";
    for (int i = 1; i <= 12; i++)
        cout << "\\";

    return 0;
}