#include <cstdlib>
#include <iostream>
#include <time.h>
#include <Windows.h>
#include <unistd.h>

using namespace std;
int main()
{
    int lottery[5];
    int user_lottery[5];
    int count = 0;

    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        int num = rand() % 10;
        lottery[i] = num;
    }
    cout << "Enter your lottery number : " << endl;
    for (int i = 0; i < 5; i++)
        cin >> user_lottery[i];

    cout << "Lottery Numbers : ";

    for (int i = 0; i < 5; i++)
        cout << lottery[i] << " ";
    cout << endl;
    cout << "Your Number : ";
    for (int i = 0; i < 5; i++)
        cout << user_lottery[i] << " ";
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        if (lottery[i] == user_lottery[i])
        {
            cout << "Numbers are same at position " << i << endl;
            count++;
        }
    }
    if (count == 5)
        cout << "**** You have won the lottery ****" << endl;
    else
        cout << "**** Same numbers = " << count;
    return 0;
}