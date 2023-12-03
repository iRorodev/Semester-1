// Muhammad Rohail 22i8776 SE-A

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter number : ";
    cin >> number;
    // for top;
    int space2 = number;
    int extraspace = 0;
    for (int i = space2; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << " ";
        cout << "*";
        for (int i = 1; i <= extraspace; i++)
            cout << " ";

        if (extraspace > 0)
            cout << "*";

        extraspace += 2;
        cout << endl;
    }

    // for center;
    int space = number * 2;
    for (int i = 1; i <= number; i++)
    {
        cout << "*";
        for (int i = 1; i <= space; i++)
            cout << " ";
        cout << "*";
        cout << endl;
    }
    // for bottom;
    extraspace--;
    for (int i = 1; i <= space2; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << " ";
        cout << "*";

        for (int i = 1; i <= extraspace; i++)
            cout << " ";

        if (extraspace > 0)
            cout << "*";

        extraspace -= 2;
        cout << endl;
    }

    for (int i = 0; i <= number; i++)
        cout << " ";
    cout << "*";
    cout << endl;
    return 0;
}
