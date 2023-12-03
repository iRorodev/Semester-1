// Muhammad Rohail 22i8776 SE-A

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, n, y, limit = 0;
    cout << "Enter x:";
    cin >> x;
    cout << "enter n:";
    cin >> n;

    for (int i = -x; i <= x; i++)
    {
        y = pow(i, n) - pow(i, n - 1);
        if (limit < y)
            limit = y;
    }

    for (int i = limit; i >= 0; i--)
    {
        cout << i;
        for (int j = -x; j <= x; j++)
        {
            y = ((pow(j, n)) - (pow(j, n - 1)));
            if (y == i)
                cout << "\t*";
            else
                cout << "\t ";
        }
        cout << endl;
    }
    cout << "\t";
    for (int i = -x; i <= x; i++)
        cout << i << "\t";

    cout << endl;
    cout << "-------------------------" << endl;
    for (int i = -x; i <= x; i++)
    {
        y = pow(i, n) - pow(i, n - 1);
        cout<<" at x = "<<i<<" y = "<<y<<endl;
    }
    cout << "-------------------------" << endl;
    


    return 0;
}