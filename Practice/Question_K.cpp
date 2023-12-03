#include<iostream>
using namespace std;

float vol (float x);

int main()
{
    float r , v;

    cout<<"\nEnter radius: ";
    cin>> r;

    v = vol(r) ;
    cout<<"\nVolumn is: "<<v;
    return 0;
}

float vol (float x)
{
    const float pi = 3.1415;
    return ((4/3)*pi*x*x*x);
}
