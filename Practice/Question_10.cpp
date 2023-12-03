//Muhammad Rohail 22i-8776 SE-A

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, sin, cos;
    const float pi = 3.1415926535897932384626433832795;

    cout << "\nEnter x in degrees:";
    cin >> x;

    cout << "at x = "<<x;

    x = x * (pi / 180);

    sin = x - ((pow(x, 3)) / (3 * 2 * 1)) + ((pow(x, 5)) / (5 * 4 * 3 * 2 * 1)) - ((pow(x, 7)) / (7 * 6 * 5 * 4 * 3 * 2 * 1)) + ((pow(x, 9)) / (9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1));
    cos = 1 - ((pow(x, 2)) / (2 * 1)) + ((pow(x, 4)) / (4 * 3 * 2 * 1)) - ((pow(x, 6)) / (6 * 5 * 4 * 3 * 2 * 1)) + ((pow(x, 8)) / (8 * 7 * 6 * 5 * 4 * 3 * 2 * 1));

    cout<<"\nsin(x) = :"<<sin<<endl;
    cout<<"cos(x) = :"<<cos<<endl;

    return 0;
}
