#include <iostream>
using namespace std;
int counter(int num);
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "The total number of ones are : ";
    cout << counter( num ) << endl;
    return 0;
}
int counter(int num)
{
    int ones = 0;
    while (num >= 1)
    {
        int mod = num % 2;
        if (mod == 1)
            ones = ones + 1;
        num = num / 2;
    }
    return ones;
}