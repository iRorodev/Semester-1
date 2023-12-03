//Muhammad Rohail 22i-8776 SE-A

#include <iostream>
using namespace std;
int main()
{
    float gross;
    float h, r;

    cout << "\nEnter hours: ";
    cin >> h;
    cout << "\nEnter rate: ";
    cin >> r;
    r = (r / 100);

    gross = (r * 40) + (1.5 * r * (h - 40));
    cout << "The gross pay is: " << gross << endl;

    return 0;
}

// y = 10; d = 20
// h = int(input("Enter h: "))
// r = float(input("Enter r: "))
// print("The gross pay is: ", ((r/100) * 40) + (1.5 * (r/100) * (h - 40)))