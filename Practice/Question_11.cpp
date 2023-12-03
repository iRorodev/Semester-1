// Fizza Ali 22i8787 Question 1

#include <iostream>
using namespace std;
int main()
{
    char package;                             // package is character. A or B or C or D
    float off_minutes, on_minutes, gb;        // user enter these
    float billofA, billofB, billofC, billofD; // to calculate the bill
    int mb;                                   // to convert gbies into mbies

    cout << "Which packagae did you subcribed too? :: ";
    cin >> package; // enters package
    cout << "How many Gbs did you use? :: ";
    cin >> gb; // enters gb
    cout << "How many off net minutes did you use? :: ";
    cin >> off_minutes; // enter off net minutes
    cout << "How many on net minutes did you use? :: ";
    cin >> on_minutes; // enter on net minutes

    mb = gb * 1024; // to covert gbies into mbies for easier calculation
    //-----------------------------------------------
    billofA = 100 + 500;
    if (gb > 1)
        billofA += 20 * (mb - 1024) / 100;
    if (off_minutes > 100)
        billofA += 3.75 * (off_minutes - 100);
    if (on_minutes > 200)
        billofA += 2.25 * (on_minutes - 200);
    //-----------------------------------------------
    billofB = 350 + 800;
    if (gb > 5)
        billofB += 15 * (mb - 5120) / 100;
    if (off_minutes > 250)
        billofB += 3.25 * (off_minutes - 250);
    if (on_minutes > 350)
        billofB += 2 * (on_minutes - 350);
    //-----------------------------------------------
    billofC = 500 + 1000;
    if (gb > 7)
        billofC += 13 * (mb - 7168) / 100;
    if (off_minutes > 350)
        billofC += 2.75 * (off_minutes - 100);
    if (on_minutes > 300)
        billofC += 1.75 * (on_minutes - 300);
    //-----------------------------------------------
    billofD = 1000 + 1500;
    if (gb > 50)
        billofD += 10 * (mb - 51200) / 100;
    if (off_minutes > 750)
        billofD = 1.5 * (off_minutes - 750);
    if (on_minutes > 1000)
        billofD += 1 * (on_minutes - 1000);
    //-----------------------------------------------
    cout << "*****ALL the bills displayed here just to check *****" << endl;
    cout << "Bill of A is :: " << billofA << " Rs/-" << endl;
    cout << "Bill of B is :: " << billofB << " Rs/-" << endl;
    cout << "Bill of C is :: " << billofC << " Rs/-" << endl;
    cout << "Bill of D is :: " << billofD << " Rs/-" << endl;
    cout << "--------------------------------------" << endl;
    if (package == 'a' || package == 'A')
    {
        cout << "Bill of A is :: " << billofA << " Rs/-" << endl;
        if (billofA > billofB)
            cout << "you would have saved " << billofA - billofB << " Rs/- if you had subscribed to offer B" << endl;
        if (billofA > billofC)
            cout << "you would have saved " << billofA - billofC << " Rs/- if you had subscribed to offer C" << endl;
        if (billofA > billofD)
            cout << "you would have saved " << billofA - billofD << " Rs/- if you had subscribed to offer D" << endl;
    }
    if (package == 'b' || package == 'B')
    {
        cout << "Bill of B is :: " << billofB << " Rs/-" << endl;
        if (billofB < billofA)
            cout << "you would have saved " << billofA - billofB << " Rs/- if you had subscribed to offer A" << endl;
        if (billofB > billofC)
            cout << "you would have saved " << billofB - billofC << " Rs/- if you had subscribed to offer C" << endl;
        if (billofB > billofD)
            cout << "you would have saved " << billofB - billofD << " Rs/- if you had subscribed to offer D" << endl;
    }
    if (package == 'c' || package == 'C')
    {
        cout << "Bill of C is :: " << billofC << " Rs/-" << endl;
        if (billofC < billofA)
            cout << "you would have saved " << billofA - billofC << " Rs/- if you had subscribed to offer A" << endl;
        if (billofC > billofB)
            cout << "you would have saved " << billofC - billofB << " Rs/- if you had subscribed to offer B" << endl;
        if (billofC > billofD)
            cout << "you would have saved " << billofC - billofD << " Rs/- if you had subscribed to offer D" << endl;
    }
    if (package == 'd' || package == 'D')
    {
        cout << "Bill of D is :: " << billofD << " Rs/-" << endl;
        if (billofD < billofA)
            cout << "you would have saved " << billofA - billofD << " Rs/- if you had subscribed to offer A" << endl;
        if (billofD > billofB)
            cout << "you would have saved " << billofB - billofD << " Rs/- if you had subscribed to offer B" << endl;
        if (billofD < billofC)
            cout << "you would have saved " << billofC - billofD << " Rs/- if you had subscribed to offer D" << endl;
    }
    return 0;
}