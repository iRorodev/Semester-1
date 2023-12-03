#include <iostream>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;
string coversion(int num) // function taken from interent to covenrt integer into string
{
    stringstream temp;
    temp << num;
    return temp.str();
}
string series(string number)
{
    string strcount;
    string output = "";
    for (int i = 0; i < number.length(); i++)
    {
        int count = 1;
        for (int j = i + 1; j < number.length(); j++)
        {
            if (number[i] == number[i + 1])
                count++;
        }
        strcount = coversion(count);
        output += strcount + number[i];
    }
    return output;
}
int main()
{
    string number;
    cout << "Enter a number : " << endl;
    cin >> number;
    for (int i = 1; i < 7; i++)
    {
        number = series(number);
        cout << number << endl;
    }
    return 0;
}