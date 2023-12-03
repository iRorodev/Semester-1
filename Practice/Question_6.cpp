//Muhammad Rohail 22i-8776 SE-A

#include <iostream>
using namespace std;
int main()
{
    float s, v, t, a;
    cout << "\nEnter velocity:";
    cin >> v;
    cout << "\nEnter acceleration:";
    cin >> a;
    cout << "\nEnter time:";
    cin >> t;

    s = (v * t) + (0.5 * a * t * t);
    cout << "\nS = " << s;

    return 0;
}
