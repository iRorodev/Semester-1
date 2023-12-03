#include<iostream>
using namespace std;

float withdraw( float bal);
float enter( float bal);

int main()
{
float rate, starting_bal = 0, bal;
int months;
float total_deposit = 0;
float total_withdraw = 0;

cout<<"what is the annual interest rate? :";
cin>>rate;
float monthlyrate = rate / 12;
cout<<"What is the starting balance? : ";
cin>>starting_bal;
bal = starting_bal;
cout<<"And number of months that have passed since the account was established? : ";
cin>>months;

for (int i = 1; i <= months; i++)
{
cout<<"Enter the amount that you deopsited in month "<<i<<" :" ;
float dep = enter ( bal );
cout<<"Enter the amount that you withdrew this month "<<i<<" :" ;
float with = withdraw ( bal );

if ( dep < 0 || with < 0)
{
    cout<<"you have entered negative values"<<endl;
    return 0;
}
total_deposit = total_deposit + dep;
total_withdraw = total_withdraw + with;
bal = (bal + dep) - with;
int xtra_bal = bal * monthlyrate;
bal = bal + xtra_bal;
if ( bal < 0 )
{
cout<<"negative balance detected"<<endl;
return 0;
}
}
cout<<"Total deposits = " <<total_deposit<<endl;
cout<<"Total withdraws = " <<total_withdraw<<endl;
cout<<"Your balance is : " <<bal<<endl;
cout<<"The interest gained = " <<bal - starting_bal<<endl;
return 0;
}

float enter( float bal)
{
float dep;
cin>>dep;
return dep; 
}

float withdraw( float bal)
{
float with;
cin>>with;
return with;
}
