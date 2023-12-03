#include <iostream>
using namespace std;

float result(float r = 1.0, float v1 = 30.0, float A2 = 2000)
{
    const float pi = 3.1415;
    float v2;
    r = r/100;
    v1=v1/100;
    A2 = A2/10000;
    v2 = ((pi * r * r) * v1) / A2;
    return v2;
}

int main()
{
    float radius, velocity, area;
    float ans;
    cout<<"Enter radius , velocity v1 and area A2 "<<endl;
    cout<<"ALL IN CM UNITS"<<endl;
    cin>>radius>>velocity>>area;

    ans = result(radius,velocity,area);
    cout<<"The answer is: "<<ans<<endl;
    
    return 0;
}