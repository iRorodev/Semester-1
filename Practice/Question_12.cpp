// Fizza Ali 22i8787 Question 2

#include <iostream>
using namespace std;
int main()
{
    int price, Custom_Duty = 0, Sales_Tax = 0, Income_Tax = 0;
    cout << "Enter the price of the imported mobile phone :: ";
    cin >> price;
    if (price >= 0 && price <= 50000)
    {
        Custom_Duty = price * 0.02;
        Sales_Tax = price * 0.04;
    }
    else if (price >= 50001 && price <= 70000)
    {
        Custom_Duty = price * 0.05;
        Sales_Tax = price * 0.05;
    }
    else if (price >= 70001 && price <= 100000)
    {
        Custom_Duty = price * 0.09;
        Sales_Tax = price * 0.06;
        Income_Tax = price * 0.05;
    }
    else if (price >= 100001 && price <= 150000)
    {
        Custom_Duty = price * 0.17;
        Sales_Tax = price * 0.13;
        Income_Tax = price * 0.06;
    }
    else if (price >= 150001)
    {
        Custom_Duty = price * 0.20;
        Sales_Tax = price * 0.15;
        Income_Tax = price * 0.08;
    }
    else
    {
        cout << "Incorrect price??" << endl;
        return 0;
    }
    cout << "Custom_Duty : " << Custom_Duty << endl;
    cout << "Sales_Tax   : " << Sales_Tax << endl;
    cout << "Income_Tax  : " << Income_Tax << endl;
    cout << "Total Tac payable by FAST on behalf of the employee :: " << Custom_Duty + Sales_Tax + Income_Tax << endl;
    return 0;
}