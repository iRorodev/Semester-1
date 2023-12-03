#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, size;

    cout << "enter size : ";
    cin >> size;
    int arr[size];

    cout << "Enter numbers: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Enter x = ";
    cin >> x;

    int i = 0;
    int j = size - 1;

    while (j > 1)
    {
        if (arr[i] + arr[j] > x)
            j--;
        else
            i++;
    }
    cout << "Closed pair is: " << arr[i] << " & " << arr[j] << endl;
    return 0;
}