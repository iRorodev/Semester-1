// Muhammad Rohail  22i8776  SE-A

// Conversion (if-else)

#include <iostream>
using namespace std;
void coversion(string str1, string str2);

int main()
{
    // fl.oz --->  ml, l, gal
    // oz ,lb ---> kg , g
    // ft, mi ---> mm , cm , m , km
    float Convert, Result;
    string str1, str2;

    cout << "Here are the coversions available!" << endl;
    cout << "Input in      Output in" << endl;
    cout << "fl.oz , gal  --->  ml , l " << endl;
    cout << "oz , lb      --->  kg , g" << endl;
    cout << "ft , mi      --->  mm , cm , m , km" << endl;

    cout << "\nWhat do you want to covert from: ";
    cin >> str1;
    cout << "\nWhat do you want to covert To:  ";
    cin >> str2;

    coversion(str1, str2);

    return 0;
}
void coversion(string str1, string str2)
{
    float Result, Convert;
    if (str1 == "fl.oz" && str2 == "ml")
    {
        cout << "The the value in fl.oz : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert * 29.5735;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "fl.oz" && str2 == "l")
    {
        cout << "The the value in fl.oz : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert / 33.814;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "gal" && str2 == "ml")
    {
        cout << "The the value in gal : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert * 3785;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
       else if (str1 == "gal" && str2 == "l")
    {
        cout << "The the value in gal : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert * 3.785;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "oz" && str2 == "g")
    {
        cout << "The the value in oz : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert * 28.35;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "oz" && str2 == "kg")
    {
        cout << "The the value in oz : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert / 35.274;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "lb" && str2 == "g")
    {
        cout << "The the value in lb : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert * 453.592;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "lb" && str2 == "kg")
    {
        cout << "The the value in lb : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert / 2.205;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "in" && str2 == "mm")
    {
        cout << "The the value in in : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert * 25.4;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "in" && str2 == "cm")
    {
        cout << "The the value in in : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert * 2.54;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "in" && str2 == "m")
    {
        cout << "The the value in in : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert / 39.37;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "in" && str2 == "km")
    {
        cout << "The the value in in : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert / 39370;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "ft" && str2 == "mm")
    {
        cout << "The the value in ft : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert * 304.8;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "ft" && str2 == "cm")
    {
        cout << "The the value in ft : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert * 30.48;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "ft" && str2 == "m")
    {
        cout << "The the value in ft : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert / 3.281;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "ft" && str2 == "km")
    {
        cout << "The the value in ft : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert / 3281;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "mi" && str2 == "mm")
    {
        cout << "The the value in mi : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert * 1609344;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "mi" && str2 == "cm")
    {
        cout << "The the value in mi : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert * 160900;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "mi" && str2 == "m")
    {
        cout << "The the value in mi : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert * 1609;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else if (str1 == "mi" && str2 == "km")
    {
        cout << "The the value in mi : " << endl;
        cin >> Convert;
        if (Convert < 0)
            cout << "Why less than 0? baka" << endl;
        else
        {
            Result = Convert * 1.609;
            cout<<Convert<<" "<<str1<<" = "<<Result<<" "<<str2<<endl;
        }
    }
    else
    {
        cout << "This is an Invalid Conversion!" << endl;
    }
}
