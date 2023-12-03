//Muhammad Rohail 22i-8776 SE-A

#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    float median, mean;

    cout << "Enter the 10 numbers :" << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;

    median = (n5 + n6) / 2;
    mean = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10;

    cout << "Mean is: " << mean << endl;
    cout << "Median is: " << median << endl;

    return 0;
}

// n1, n2, n3, n4, n5, n6, n7, n8, n9, n10 = map(float, input("Enter 10 Numbers: ").split())

// median = (n5 + n6)/ 2
// mean = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10

// print("Mean is: ", mean)
// print("Median is: ", median)