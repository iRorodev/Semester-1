//Muhammad Rohail 22i-8776 SE-A

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float p, t, r, n;
    float A;

    cout << "\nEnter Principal you want to deposit in your bank: ";
    cin >> p;
    cout << "\nEnter investment tenure: ";
    cin >> t;
    cout << "\nEnter Rate: ";
    cin >> r;
    
    r = r / 100;
    n = 12;

    A = pow(p * (1 + (r / n)), n * t);
    cout << "\nThe Compounded Interest is: " << A << endl;

    return 0;
}

// p = float(input("Enter Principal you want to deposit in your bank: "))
// t = int(input("Enter investment tenure: "))
// r = float(input("Enter rate: "))
// print("The compound interest is:", pow(p * (1 + ((r / 100) / 12)), (12 * t)))
