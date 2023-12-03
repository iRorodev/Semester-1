// Muhammad Rohail  22i8776  SE-A

// Data Packages (Nested Switch)

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float usage, mb;
char offer;
float extra;

float offerA();
float offerB();
float offerC();
void validate(float usage);

int main()
{
    cout << " OFFER         PRICE/month        DATA       EXTRA" << endl;
    cout << "   A             100Rs            2GB      30Rs per 100MB" << endl;
    cout << "   B             250Rs            5.5GB    20Rs per 100MB" << endl;
    cout << "   C            1000Rs            unlimited " << endl;

    cout << "which offer did you subscribe too? A,B,C" << endl;
    cin >> offer;

    cout << "How many Gbs have you used?" << endl;
    cin >> usage;

    validate(usage);

    float a = offerA();
    float b = offerB();
    float c = offerC();

    switch (offer)
    {
    case 'A':
    case 'a':
    {

        cout << "Your bill is " << a << "Rs" << endl;

        if (a > b)
            cout << "You would have saved " << a - b << " RS if you had subsribed to offer B" << endl;
        if (a > c)
            cout << "You would have saved " << a - c << " RS if you had subsribed to offer C" << endl;
        break;
    }

    case 'B':
    case 'b':
    {

        cout << "Your bill is " << b << "Rs" << endl;

        if (b > a)
            cout << "You would have saved " << b - a << " RS if you had subsribed to offer A" << endl;
        if (b > c)
            cout << "You would have saved " << b - c << " RS if you had subsribed to offer C" << endl;
        break;
    }

    case 'C':
    case 'c':
    {

        cout << "Your bill is " << c << "Rs" << endl;

        if (c > a)
            cout << "You would have saved " << c - a << " RS if you had subsribed to offer A" << endl;
        if (c > b)
            cout << "You would have saved " << c - b << " RS if you had subsribed to offer B" << endl;
        break;
    }

    default:
    {
        cout << "Invalid offer, please try again!" << endl;
        break;
    }
    }
}
float offerA()
{
    float bal = 0;
    bal = bal + 100;
    if (usage > 2)
    {
        mb = usage * 1024;
        mb = mb - 2048;
        int a = ceil(mb / 100);
        bal = bal + (a * 30);
    }
    return bal;
}
float offerB()
{
    float bal = 0;
    bal = bal + 250;
    if (usage > 5.5)
    {
        mb = usage * 1024;
        mb = mb - 5632;
        int a = ceil(mb / 100);
        bal = bal + (a * 20);
    }
    return bal;
}
float offerC()
{
    float bal = 0;
    bal = bal + 1000;
    return bal;
}
void validate(float usage)
{
    if (usage < 0)
    {
        cout << "WOW negative data usage? please enter again" << endl;
        cin >> usage;
        validate(usage);
    }
}