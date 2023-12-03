#include <bits/stdc++.h>
using namespace std;

int converttoseconds(int h, int m, int s)
{
    int timeinsec = s + (60 * m) + (60 * 60 * h);
    return timeinsec;
}
int difference(int t1, int t2)
{
    return (t1>t2)? t1-t2 : t2-t1;
}
int main()
{
    int h1, h2, m1, m2, s1, s2;
    cout << "Enter first time as three integers ( hours / min / sec) : ";
    cin >> h1 >> m1 >> s1;
    cout << "Enter second time as three integers ( hours / min / sec) : ";
    cin >> h2 >> m2 >> s2;

    int time1 = converttoseconds(h1, m1, s1);
    int time2 = converttoseconds(h2, m2, s2);

    int diff = difference(time1, time2);

    cout<<"Difference between times is : "<<diff<<endl;
    return 0;
}