#include <bits/stdc++.h>
using namespace std;

int larger(int *arr);
void graph(int y, int *arr);

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        do
        {
            cout << "Enter number # " << i << " : ";
            cin >> arr[i];
        } while (arr[i] < 0);
    }

    int y = larger(arr);
    graph(y, arr);

    return 0;
}

int larger(int *arr)
{
    int largest = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
    }
    return largest;
}
void graph(int y, int *arr)
{
    for (int x = y; x >= 1; x--)
    {
        cout << "\n"
             << x;

        (x >= 10) ? cout << " " : cout << "  ";
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] % x == 0)
            {
                cout << "* ";
                arr[i] -= 1;
            }
            else
                cout << "  ";
        }
    }
    cout << "\n   1 2 3 4 5";
}
