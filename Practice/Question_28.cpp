#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k, space;
    cout << "Enter n:: ";
    cin >> n;
    // upper part and center
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        space = 2 * n - 2 * i;
        k = 1;
        while (k <= space)
        {
            cout << " ";
            k = k + 1;
        }
        j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << "\n";
        i = i + 1;
    }
    // lower part
    i = n - 1; // if i = n then 2 lines will be printed in center
    while (i >= 1)
    {
        j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        k = 1;
        space = 2 * n - 2 * i;
        while (k <= space)
        {
            cout << " ";
            k = k + 1;
        }
        j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout <<"\n";
        i = i - 1;
    }
    return 0;
}

