#include<iostream>
using namespace std;

float ang3(float a, float b);

int main()
{
    float a1 , a2, a3;
    cout<<"\nEnter two angles ";
    cin>> a1 >> a2;

    a3 = ang3( a1, a2);
    cout<<"\nagle 3 = "<<a3<<endl;

    return 0;    
}

float ang3(float a, float b)
{
    float c;
    c = 180 - a - b;
    return c;
}
