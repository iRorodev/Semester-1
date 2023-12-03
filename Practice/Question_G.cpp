#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c;
cout<<"Enter A and then B: "<<endl;
cin>>a>>b;

c = (a*a*a) + (3*a*a*b) + (3*a*b*b) + (b*b*b);
cout<<"Result is : "<<c<<endl;
return 0;
}

