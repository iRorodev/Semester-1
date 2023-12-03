#include <bits/stdc++.h>
using namespace std;

int sumOfSquares(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += (digit * digit);
        n /= 10;
    }
    return sum;
}
bool isHappy(int num)
{
    int sum = num;
    for (int illiteraions = 1; illiteraions <= 100; illiteraions++)
    {
        sum = sumOfSquares(sum);
        if (sum == 1)
            return true;
    }
    return false;
}

int main()
{
    int num;
    do
    {
        cout << "Enter a number: ";
        cin >> num;
    } while (num <= 0);

    if (isHappy(num))
        cout << "Happy Number" << endl;
    else
        cout << "Depressed Number" << endl;

    return 0;
}
