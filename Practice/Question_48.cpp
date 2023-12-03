#include <bits/stdc++.h>
using namespace std;

int digitcall(int num, int k)
{
    int temp = num;

    int digits = 1;
    while (true)
    {
        temp /= 10;
        if (temp <= 0)
            break;
        digits++;
    }
    cout << "The number has " << digits << " digits " << endl;
    if (k >= digits)
    {
        cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
        cout << "Cant find the number at index " << k << endl;
        cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
        return -1;
    }

    int array[digits];
    int index = 0;
    while (digits > 0)
    {
        digits--;
        temp = 1;
        for (int i = 1; i <= digits; i++)
            temp *= 10;
        array[index] = num / temp;
        index++;
        num %= temp;
    }
    return array[k];
}
int main()
{
    int num, k;
    cout << "\nEnter number and k :: ";
    cin >> num >> k;
    if (num < 0)
        num = -(num);
    if (k < 0)
        k = -(k);

    int digit = digitcall(num, k);
    if (digit != -1)
    {
        cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
        cout << "The digit at location/index " << k << " is " << digit << endl;
        cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
    }
    return 0;
}
