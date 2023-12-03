// Muhammad Rohail 22i8776 SE-A

#include <iostream>
using namespace std;

int larger(int a, int b, int c, int d, int e)
{
    if (a >= b && a >= c && a >= d && a >= e)
        return a;
    else if (b >= a && b >= c && b >= d && b >= e)
        return b;
    else if (c >= a && c >= b && c >= d && c >= e)
        return c;
    else if (d >= a && d >= b && d >= c && d >= e)
        return d;
    else
        return e;
}
void graph(int y, int a, int b, int c, int d, int e)
{
    for (int i = y; i >= 1; i--)
    {
        cout << endl;
        cout << i;

        if (i >= 10)
            cout << " ";
        else
            cout << "  ";

        if (a % i == 0)
        {
            cout << "* ";
            a = a - 1;
        }
        else
            cout << "  ";

        if (b % i == 0)
        {
            cout << "* ";
            b = b - 1;
        }
        else
            cout << "  ";

        if (c % i == 0)
        {
            cout << "* ";
            c = c - 1;
        }
        else
            cout << "  ";

        if (d % i == 0)
        {
            cout << "* ";
            d = d - 1;
        }
        else
            cout << "  ";

        if (e % i == 0)
        {
            cout << "* ";
            e = e - 1;
        }
    }
    cout << "\n   1 2 3 4 5";
}

int main()
{
    int a, b, c, d, e;
    cout << "Enter five numbers : ";
    cin >> a >> b >> c >> d >> e;

    int y = larger(a, b, c, d, e); // represents the greates number
    graph(y, a, b, c, d, e);

    return 0;
}