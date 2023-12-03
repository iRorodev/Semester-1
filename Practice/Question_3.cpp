//Muhammad Rohail 22i-8776 SE-A

#include <iostream>
using namespace std;

int main()
{
    const int y = 10, d = 20;
    float c, v;

    cout << "\nEnter c: ";
    cin >> c;
    cout << "\nEnter v: ";
    cin >> v;

    cout << "\nThe result is: " << (y - c) / (d + v) << endl;
    return 0;
}

// y = 10; d = 20
// c = int(input("Enter c: "))
// v = int(input("Enter v: "))
// print("The result is:", (y-c)/(d+v))