// Muhammad Rohail 22i8776 SE-A

#include <iostream>
#include <Windows.h>
#include <unistd.h>
using namespace std;
int main()
{
    for (int hours = 0; hours < 24; hours++)
    {
        for (int minutes = 0; minutes < 60; minutes++)
        {
            for (int seconds = 0; seconds < 60; seconds += 10)
            {
                system("cls");
                cout << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
                sleep(10);
            }
        }
    }
    return 0;
}