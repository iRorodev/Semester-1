#include<iostream>
using namespace std;
int main()
{

float price, quantity, income, tax, aftertax;


cout<<"Enter the price of choclates: "<<endl;
cin>>price;
cout<<"Enter the quantity of choclates sold: "<<endl;
cin>>quantity;

income = price*quantity;
tax = (income/100) * 15;
aftertax = income - tax;

cout<<"Total income: "<<income<<endl;
cout<<"Total tax: "<<tax<<endl;
cout<<"Total after tax: "<<aftertax<<endl;

return 0;
}


