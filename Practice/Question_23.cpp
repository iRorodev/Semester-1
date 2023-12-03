// Muhammad Rohail  22i8776  SE-A

// Increasing or Decreasing (Ternary Operator + any other decision construct (optional))

#include <iostream>
using namespace std;
float a, b, c;

void strict();
void lenient();

int main()
{
    string str1;
    cout << "strict or lenient" << endl;
    cin >> str1;

    cout << "\nEnter the three numbers: ";
    cin >> a >> b >> c;

    if (str1 == "strict")
    {
        strict();
    }
    else if (str1 == "lenient")
    {
        lenient();
    }
    else
    {
        cout << "Please enter the spellings correctly!" << endl;
    }
    return 0;
}
void strict()
{
    (a < b && b < c) ? cout << "increasing" << endl : (a > b && b > c) ? cout << "decreasing" << endl
                                                                       : cout << "none" << endl;
}
void lenient()
{
    (a < b && b <= c || a <= b && b < c) ? cout << "increasing" << endl : (a > b && b >= c || a >= b && b > c) ? cout << "decreasing" << endl : (a == b && b == c) ? cout << "Both increasing and decreasing" << endl : cout << "idk" << endl;
}