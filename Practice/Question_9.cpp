//Muhammad Rohail 22i-8776 SE-A

#include <iostream>
using namespace std;

int main()
{
    int seconds, h, m, s, temp;

    cout << "\nEnter Seconds: ";
    cin >> seconds;

    h = seconds / 3600;
    temp = seconds % 3600;
    m = temp / 60;
    s = temp % 60;

    cout<<h<<" hrs "<<m<<" min "<<s<<" secs "<<endl;

    return 0;
}
