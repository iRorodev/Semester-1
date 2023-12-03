#include<iostream>
using namespace std;
int main()
{

int num, c;

cout<<"\nEnter number: "<<endl;
cin>> num;

c = num / 10000 ;
cout<< c <<endl;
c = c*10000;
num = num - c;

c = num / 1000;
cout<< c <<endl;
c = c*1000;
num = num - c;

c = num / 100 ;
cout<< c <<endl;
c = c*100;
num = num - c;

c = num / 10 ;
cout<< c <<endl;
c = c*10;
num = num - c;

c = num / 1 ;
cout<< c <<endl;
c = c*1;
num = num - c;

return 0;
}
