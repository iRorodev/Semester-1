#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float A,B,C;
double income;

cout<<"How many seats A were sold?"<<endl;
cin>>A;
cout<<"How many seats B were sold?"<<endl;
cin>>B;
cout<<"How many seats C were sold?"<<endl;
cin>>C;

income = (A*150) + (B*140) + (C*190);
cout<<fixed;
cout<<"Total income: "<<setprecision(3) <<income<<endl;

return 0;
}
