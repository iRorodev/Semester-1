// Muhammad Rohail  22i8776  SE-A

// Discounted Tickets (Nested if)

#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

string name;
int d, m, y, age;
float income;
int check = 0;
string code;

int validate();
int agecal();
void checkdiscount();

int main()
{

    int check = 0;
    string code;
    // Rules ------
    // Rule 1: You get a discount of 50% if you are younger than 22
    // Rule 2: You get a discount of 20%, if you live in either city A or city B and work anywhere outside these cities.
    // Rule 3: You get a discount of 90%, if your income is below Rs. 10000 a month
    cout << "What is your name? ";
    cin >> name; 

    cout << "Enter your date of birthday: dd/mm/yyyy : ";
    cin >> d >> m >> y;

    cout << "How much is your income? ";
    cin >> income;

    cout << "What is your city Postal code? ";
    cin >> code;

    check = validate();
    if (check == 0)
    {
        age = agecal();
        checkdiscount();
    }

    return 0;
}
int agecal()
{
    int date = 23, month = 10, year = 2022;
    int age;
    age = year - y - 1;
    if (month == m)
    {
        if (date == d)
        {
            cout << "HAppy bIrtHDay!" << endl;
            age = age + 1;
        }
        else if (date < d)
        {
            age = age + 1;
        }
        else
        {
            cout << "You havnt had your birthday yet!" << endl;
        }
    }
    else if (month > m)
    {
        age = age + 1;
    }
    else
    {
        cout << "You didnt have your birthday this year!" << endl;
        cout << "You are " << age << "years old!" << endl;
    }
    cout << "Your age is : " << age << endl;
    return age;
}
void checkdiscount()
{
    if (income < 10000)
    {
        cout << "\nCongratulations " << name << "!" << endl;
        cout << "You get a 90% discount" << endl;
    }
    else if (age < 22)
    {
        cout << "\nCongratulations " << name << "!" << endl;
        cout << "You get a 50% discount!" << endl;
    }
    else if (code[0] == '4' && code[2] == '3' && code.length() == 4)
    {
        cout << "\nCongratualtions " << name << " !. You are a ";
        cout << "City A resident so you get a discount of 20%" << endl;
    }
    else if (code[0] == 5 && code[2] == 5 || code[2] == 3 && code.length() == 5)
    {
        cout << "\nCongratualtions " << name << " !. You are a " << endl;
        cout << "City B resident so you get a discount of 20%" << endl;
    }
    else
    {
        cout << "\nNO discount for you " << endl;
    }
}
int validate()
{
    if (d <= 0 || d > 31 || m <= 0 || m > 12 || y <= 1922 || y >= 2022)
    {
        cout << "\nInvalid Date! Our system doesnt support such dates!" << endl;
        check = 1;
    }
    if (income < 0)
    {
        cout << "\nHave some pity on yourself and dont waste money on a themepark.\nBuy something to eat. " << endl;
        check = 1;
    }
    return check;
}