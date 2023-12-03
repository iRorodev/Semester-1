//Muhammad Rohail 22i8776 SE-A

#include<iostream>
using namespace std;
int main()
{
int number;
cout<<"Enter a number to check if it positive or negative : ";
cin>>number;

if ( number == 0)
cout<<"Neither positive nor negative"<<endl;
else
{
int temp = number;

for ( int i = 1 ; i <= number ; i++ )
temp --;

if ( temp == 0)
cout<<"Positive"<<endl;
else
cout<<"Negative"<<endl;
}
return 0;
}
