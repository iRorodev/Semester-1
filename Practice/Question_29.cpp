#include <iostream>
using namespace std;

int main()
{
    int rows, space;
    cout << "Enter Rows :: ";
    cin >> rows;
    space = rows - 2;
    rows = (2 * rows) - 1;
    // top part
    for (int i = 0; i < rows / 2; i++)
    {
        cout << endl
             << "* ";
        for (int j = 0; j < space; j++)
            while (j < space)
                cout << "  ";
        cout << "* ";
        if (i == 0)
        {
            for (int k = 0; k < rows / 2; k++)
                cout << "* ";
        }
    }
    // mid line
    cout << endl;
    for (int i = 0; i < rows; i++)
        cout << "* ";
    // bottom part
    for (int i = 0; i < rows / 2; i++)
    {
        cout << endl;
        if (i != rows / 2 - 1)
        {
            for (int j = 0; j <= space; j++)
                cout << "  ";
        }
        else
        {
            for (int k = 0; k < rows / 2; k++)
                cout << "* ";
        }
        cout << "* ";
        for (int j = 0; j < space; j++)
        {
            cout << "  ";
        }
        cout << "* ";
    }
    return 0;
}