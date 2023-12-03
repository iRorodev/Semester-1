#include<iostream>
using namespace std;

void isprime( int num);
int main()
{
int num;
cout<<"Enter a number to check if it s prime or not"<<endl;
cout<<"Enter a negative number to close the program:<<endl"<<endl;
cin>>num;

while(num >= 0 )
{
isprime(num);
cout<<"Enter a number again! "<<endl;
cout<<"Enter a negative number to close the program: "<<endl;
cin>>num;

}

return 0;
}
void isprime( int num)
{
int check = 1;
if ( num != 1 && num !=0 )
{
for ( int i = 2; i < num; i++ )
{
if ( num % i == 0)
{
check = 0;
break;
}
}
if (check == 0 )
cout<<"Number is not prime"<<endl;
else
cout<<"Number is prime"<<endl;
}
else
cout<<"Number is not prime"<<endl;
}
