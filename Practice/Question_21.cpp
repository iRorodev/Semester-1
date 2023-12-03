// Muhammad Rohail  22i8776  SE-A

// Roman (if-else)

#include <iostream>
using namespace std;

void validate ( int number);
void roman ( int number );

int main()
{
    int a;
    cout << "\nEnter a number : ";
    cin >> a;
    
    validate( a );
    return 0;
}
void validate ( int number) // checks range
{
    if ( number >= 0 && number <= 3999 )
       roman ( number );
    else
       cout<<"Invalid number"<<endl;
}
void roman(int number) // coverts into roman! no loops so its long ..
{
    if (number >= 3000)
    {
        cout << "MMM";
        number = number - 3000;
    }
    if (number >= 2000)
    {
        cout << "MM";
        number = number - 2000;
    }
    if (number >= 1000)
    {
        cout << "M";
        number = number - 1000;
    }
    if (number >= 900)
    {
        cout << "CM";
        number = number - 900;
    }
    if (number >= 500)
    {
        cout << "D";
        number = number - 500;
    }
    if (number >= 400)
    {
        cout << "CD";
        number = number - 400;
    }
    if (number >= 300)
    {
        cout << "CCC";
        number = number - 300;
    }
    if (number >= 200)
    {
        cout << "CC";
        number = number - 200;
    }
    if (number >= 100)
    {
        cout << "C";
        number = number - 100;
    }
    if (number >= 90)
    {
        cout << "XC";
        number = number - 90;
    }
    if (number >= 50)
    {
        cout << "L";
        number = number - 50;
    }
    if (number >= 40)
    {
        cout << "XL";
        number = number - 40;
    }
    if (number >= 30)
    {
        cout << "XXX";
        number = number - 30;
    }
    if (number >= 20)
    {
        cout << "XX";
        number = number - 20;
    }
    if (number >= 10)
    {
        cout << "X";
        number = number - 10;
    }
    if (number == 9)
    {
        cout << "IX";
        number = number - 9;
    }
    if (number >= 5)
    {
        cout << "V";
        number = number - 5;
    }
    if (number == 4)
    {
        cout << "IV";
        number = number - 4;
    }
    if (number == 3)
    {
        cout << "III";
        number = number - 3;
    }
    if (number == 2)
    {
        cout << "II";
        number = number - 2;
    }
    if (number == 1)
    {
        cout << "I";
        number = number - 1;
    }
}