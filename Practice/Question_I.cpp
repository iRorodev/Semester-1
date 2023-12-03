#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()

{
    const double p = 3.141592654;

    float r1 = 1;
    r1 = r1 / pow(10, 2);

    float v1 = 30;
    v1 = v1 / pow(10, 2);

    float d2;
    d2 = 8 * pow(10, -4);
    d2 = d2 / pow(10, 2);

    float A2 = 2000;
    A2 = A2 / pow(10, 5);

    float v2;
    v2 = ((p*pow(r1,2))*v1)/A2;

    cout<<"Velocity V2 = "<<v2<<endl;

    return 0;
}