//Muhammad Rohail 22i-8776 SE-A

#include <iostream>
using namespace std;

int main()
{

    float a, b;
    cout << "\nEnter a: ";
    cin >> a;
    cout << "\nEnter b: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a after change: " << a << endl;
    cout << "b after change: " << b << endl;
    
    return 0;
}
