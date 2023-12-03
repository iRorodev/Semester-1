// Muhammad Rohail 22i8776 SE-A

#include <iostream>
using namespace std;
int main()
{
    int n, star, space;

    cout << "Enter n : ";
    cin >> n;

    star = 1;
    space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        cout << endl;
        for (int j = 1; j <= star; j++)
            cout << "*";
        star++;
        for (int k = 1; k <= space; k++)
        {
            if (i % 2 == 0)
            {
                if (k % 2 == 0)
                    cout << "_";
                else
                    cout << ".";
            }
            else
            {
                if (k % 2 == 0)
                    cout << ".";
                else
                    cout << "_";
            }
        }
        space--;
    }
    space = 1;
    star -= 2;
    for (int i = 1; i < n; i++)
    {
        cout << endl;
        for (int j = 1; j <= star; j++)
            cout << "*";
        star--;
        for (int k = 1; k <= space; k++)
        {
            if (i % 2 == 0)
            {
                if (k % 2 == 0)
                    cout << "_";
                else
                    cout << ".";
            }
            else
            {
                if (k % 2 == 0)
                    cout << ".";
                else
                    cout << "_";
            }
        }
        space++;
    }

    return 0;
}