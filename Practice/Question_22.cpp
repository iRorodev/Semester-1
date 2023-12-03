// Muhammad Rohail  22i8776  SE-A

// Car Price Calculator (Ternary Operator + other constructs(optional))

#include <iostream>
using namespace std;

float budget = 0, tax = 0, total = 0, addional = 0;
char status, Opptionals;
string str1;

void options();
void Automatic();
void Manual();
void sorry();
void validate(int num);

int main()
{

    cout << "what is your total budget?" << endl;
    cin >> budget;
    validate(budget);
    cout << "Are you a tax filler ot not?" << endl;
    cout << "press Y for yes or any key for no" << endl;
    cin >> status;

    (status == 'Y' || status == 'y') ? tax = 75000 : tax = 25000;
    budget = budget - tax;
    total = total + tax;

    cout << "What type of car do you want? Automatic or maual?" << endl;
    cin >> str1;
    (str1 == "Automatic" && budget >= 3899000) ? Automatic() : (str1 == "Manual" && budget >= 3769000) ? Manual()
                                                                                                       : sorry();
    return 0;
}
void Automatic()
{
    cout << "Automatic car costs 3899000/-." << endl;
    total = total + 3899000;
    if (total <= budget)
    {
        budget = budget - 3899000;
        cout << "Do you want any more addional features? press y to add optional features " << endl;
        cin >> Opptionals;
        if (Opptionals == 'Y' || Opptionals == 'y')
        {
            options();
            cout << "Tax = " << tax << endl;
            cout << fixed << "Addional Cost of features =" << addional << endl;
            cout << fixed << "The total cost of the car is " << total - tax << endl;
            cout << fixed << "AFTER TAX: " << total << endl;
            cout << "Enjoy!" << endl;
        }
        else
        {
            cout << "NO extra features :(" << endl;
            cout << "Tax = " << tax << endl;
            cout << fixed << "Addional Cost of features =" << addional << endl;
            cout << fixed << "The total cost of the car is " << total - tax << endl;
            cout << fixed << "AFTER TAX: " << total << endl;
            cout << "Enjoy!" << endl;
        }
    }
    else
    {
        cout << "You cannot afford any optionals" << endl;
        cout << "Enjoy your new car!" << endl;
    }
}
void Manual()
{
    cout << "Manual car costs 3769000/-." << endl;
    total = total + 3769000;
    if (total <= budget)
    {
        budget = budget - 3769000;
        cout << "Do you want any more addional features? press y to add optional features " << endl;
        cin >> Opptionals;
        if (Opptionals == 'Y' || Opptionals == 'y')
        {
            options();
            cout << "Tax = " << tax << endl;
            cout << fixed << "Addional Cost of features =" << addional << endl;
            cout << fixed << "The total cost of the car is " << total - tax << endl;
            cout << fixed << "AFTER TAX: " << total << endl;
            cout << "Enjoy!" << endl;
        }
        else
        {
            cout << "NO extra features :(" << endl;
            cout << "Tax = " << tax << endl;
            cout << fixed << "Addional Cost of features =" << addional << endl;
            cout << fixed << "The total cost of the car is " << total - tax << endl;
            cout << fixed << "AFTER TAX: " << total << endl;
            cout << "Enjoy!" << endl;
        }
    }
    else
    {
        cout << "You cannot afford any optionals" << endl;
        cout << "Enjoy your new car!" << endl;
    }
}
void options()
{
    int a;
    cout << "Your budget is " << budget;
    cout << "The following are some optionals for your car:" << endl;
    cout << "----------------------------------------------" << endl;
    cout << " Press               Name                            Price" << endl;
    cout << "  1  Infotainment System With navigation system     59,500" << endl;
    cout << "  2  Infotainment System Without navigation system  8,000" << endl;
    cout << "  3  Fog Lights Halogen                             2,000" << endl;
    cout << "  4  LED                                            5,000" << endl;
    cout << "  5  High grade Leather Seats                       45,000" << endl;
    cout << "  6  High grade Sofa Seats                          25,000" << endl;
    cout << "  7  Floor Mats                                     60,000" << endl;
    cout << "  8  Door visors                                    60,000" << endl;
    cout << "  9  Trunk Tray                                     8500" << endl;

    cin >> a;
    if (a == 1)
    {
        if (budget >= 59500)
        {
            cout << "Infotainment System With navigation system added successfully for 59,500" << endl;
            total = total + 59500;
            addional = addional + 59500;
            budget = budget - 59500;
        }
        else
        {
            cout << "You cant afford it, look for some options within your budget" << endl;
            cout << "Your remaining is: " << budget << endl;
        }
    }
    else if (a == 2)
    {
        if (budget >= 8000)
        {
            cout << "Infotainment System Without navigation system added successfully for 8000" << endl;
            total = total + 8000;
            addional = addional + 8000;
            budget = budget - 8000;
        }
        else
        {
            cout << "You cant afford it, look for some options within your budget" << endl;
            cout << "Your remaining is: " << budget << endl;
        }
    }
    else if (a == 3)
    {
        if (budget >= 2000)
        {
            cout << "Fog lighst Halogen added successfully for 2000" << endl;
            total = total + 2000;
            addional = addional + 2000;
            budget = budget - 2000;
        }
        else
        {
            cout << "You cant afford it, look for some options within your budget" << endl;
            cout << "Your remaining is: " << budget << endl;
        }
    }
    else if (a == 4)
    {
        if (budget >= 5000)
        {
            cout << "LED added successfully for 5000" << endl;
            total = total + 5000;
            addional = addional + 5000;
            budget = budget - 5000;
        }
        else
        {
            cout << "You cant afford it, look for some options within your budget" << endl;
            cout << "Your remaining is: " << budget << endl;
        }
    }
    else if (a == 5)
    {
        if (budget >= 45000)
        {
            cout << "High grade Leather Seats added successfully for 45000" << endl;
            total = total + 45000;
            addional = addional + 45000;
            budget = budget - 45000;
        }
        else
        {
            cout << "You cant afford it, look for some options within your budget" << endl;
            cout << "Your remaining is: " << budget << endl;
        }
    }
    else if (a == 6)
    {
        if (budget >= 25000)
        {
            cout << "High grade Sofa Seats added successfully for 25000" << endl;
            total = total + 25000;
            addional = addional + 25000;
            budget = budget - 25000;
        }
        else
        {
            cout << "You cant afford it, look for some options within your budget" << endl;
            cout << "Your remaining is: " << budget << endl;
        }
    }
    else if (a == 7)
    {
        if (budget >= 60000)
        {
            cout << "Floor Mats added successfully for 60000" << endl;
            total = total + 60000;
            addional = addional + 60000;
            budget = budget - 60000;
        }
        else
        {
            cout << "You cant afford it, look for some options within your budget" << endl;
            cout << "Your remaining is: " << budget << endl;
        }
    }
    else if (a == 8)
    {
        if (budget >= 60000)
        {
            cout << "oor visors added successfully for 59,500" << endl;
            total = total + 60000;
            addional = addional + 60000;
            budget = budget - 60000;
        }
        else
        {
            cout << "You cant afford it, look for some options within your budget" << endl;
            cout << "Your remaining is: " << budget << endl;
        }
    }
    else if (a == 9)
    {
        if (budget >= 8500)
        {
            cout << "Trunk Tray added successfully for 8500" << endl;
            total = total + 8500;
            addional = addional + 8500;
            budget = budget - 8500;
        }
        else
        {
            cout << "You cant afford it, look for some options within your budget" << endl;
            cout << "Your remaining is: " << budget << endl;
        }
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    cout << "Do you want any more features? y for yes and others for no" << endl;
    char b;
    cin >> b;
    if (b == 'y' || b == 'Y')
    {
        options();
    }
}
void sorry()
{
    cout << "You cant afford this car!" << endl;
}
void validate(int num)
{
    if (num < 0)
    {
        cout << "Is this a joke to you? Atleast enter budget greater than 0" << endl;
        cin >> budget;
        validate(budget);
    }
}