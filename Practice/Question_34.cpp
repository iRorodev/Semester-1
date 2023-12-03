// Muhammad Rohail 22i8776 SE-A

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int dia, space;

    // diameter can only be ood number so this validates even number input
    do
    {
        cout << "Enter diameter (odd) : ";
        cin >> dia;
    } while (dia % 2 == 0);
    // space respresents the dots
    space = (dia - 3) / 2;
    cout << endl;
    // for top of half to the cirlce
    for (int i = 3; i < dia; i += 2)
    {
        cout << endl;
        for (int i = 1; i <= space; i++)
            cout << ".";
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int i = 1; i <= space; i++)
            cout << ".";
        space--;
    }
    // for middle row of circle
    for (int i = 1; i <= 3; i++)
    {
        cout << endl;
        for (int j = 1; j <= dia; j++)
            cout << "*";
    }
    // for bottom half of cirlce
    space = 1;
    dia -=  2;

    for (int i = dia; i >= 3; i -= 2)
    {
        cout << endl;
        for (int i = 1; i <= space; i++)
            cout << ".";
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int i = 1; i <= space; i++)
            cout << ".";
        space++;
    }

    return 0;
}