//Muhammad Rohail 22i-8776 SE-A

#include <iostream>
using namespace std;

int main()
{
    int bday, bmonth, byear;       // b Represents birth dates
    int tday, tmonth, tyear;       // t Represents today dates
    int ageday, agemonth, ageyear; // age Represents age dates

    cout << "Enter age dd/mm/yyyy : " << endl;
    cin >> ageday >> agemonth >> ageyear;

    cout << "Enter today's date dd/mm/yyyy : " << endl;
    cin >> tday >> tmonth >> tyear;

    byear = tyear - ageyear;

    bmonth = tmonth - agemonth;

    byear = (agemonth < bmonth && bmonth < 0 ) ? byear - 1 : byear;
    bmonth = (bmonth < 0) ? bmonth + 12 : bmonth;
    
    bday = tday - ageday;

    bmonth = (bday < 0) ? bmonth - 1 : bmonth;
    bday = (bday < 0) ? bday + 30 : bday;

    bday = (bmonth == 1 || bmonth == 3 || bmonth == 5 || bmonth == 7 || bmonth == 8 || bmonth == 10 || bmonth == 12) ? bday + 1 : bday;

    cout << "Birth year = " << byear << endl;
    cout << "Birth month = " << bmonth << endl;
    cout << "Birth day = " << bday << endl;

    return 0;
}
