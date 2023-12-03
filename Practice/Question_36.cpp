// Muhammad Rohail 22i8776 SE-A

#include <iostream>
#include <Windows.h>
#include <unistd.h>
using namespace std;
int main()
{
    int steps, height, width;
    int a = 0;
    cout << "Enter the number of steps : ";
    cin >> steps;
    cout << "Enter height of each step : ";
    cin >> height;
    cout << "Enter width of each step : ";
    cin >> width;
    while (true)
    {
        int ascii = 42 + a;
        int space = (steps * width);
        int extraspace = 0;

        for (int i = 1; i <= steps; i++)
        {
            if (ascii > 50)
                ascii = 42;
            ascii = ascii + 1;
            for (int i = 1; i <= space; i++)
                cout << " ";
            for (int i = 1; i <= width; i++)
                cout << char(ascii);
            for (int i = 1; i <= extraspace - 1; i++)
                cout << " ";
            if (extraspace > 0)
                cout << char(ascii);
            cout << endl;
            for (int i = 1; i <= height; i++)
            {
                for (int i = 1; i <= space; i++)
                    cout << " ";
                cout << char(ascii);
                for (int i = 1; i <= width - 2; i++)
                    cout << " ";
                for (int i = 1; i <= extraspace; i++)
                    cout << " ";

                cout << char(ascii);
                cout << endl;
            }
            extraspace = extraspace + width;
            space = space - width;
        }
        for (int i = 1; i <= steps * width + steps; i++)
            cout << "-";
        a++;
        sleep(3);
        system("cls");
    }
    return 0;
}