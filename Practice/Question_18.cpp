// Muhammad Rohail  22i8776  SE-A

// Overlapping Appointments (if compound statements &&/||)

#include <iostream>
using namespace std;
void gettime();                                                // gets the time of both appointments
void getdate();                                                // gets the date of both appointments
void isoverlapping(int s1, int s2, int e1, int e2);            // checks if appointments overlap or not
void validate(int s1, int s2, int e1, int e2);                 // checks the time to see if it is valid
void validate(int d1, int d2, int m1, int m2, int y1, int y2); // chesks the dates and see if they are valid!
// in this program only the valid years are 2000 - 2025

/* SO how this works is first its takes two dates and checks if both dates are different or not.
If both dates are different then it appointment wont overlap :)
otherwise it will ask for the time and then compare time to give results! */

int main()
{
    getdate();
    return 0;
}
void getdate()
{
    int d1, m1, y1;  // appointment date of A1
    int d2, m2, y2;  // appointment date of A2
    cout << "\nEnter date for first appointment dd/mm/yyyy: ";
    cin >> d1 >> m1 >> y1;
    cout << "\nEnter date for second appointment dd/mm/yyyy ";
    cin >> d2 >> m2 >> y2;

    validate(d1, d1, m1, m2, y1, y2);
    if (d1 == d2 && m1 == m2 && y1 == y2) // if dates are same only then will appointmesnts overlap!
    {
        gettime();
    }
    else
    {
        cout << "-----------------------------------------------------" << endl;
        cout << "Appointments wont overlap because dates are different" << endl;
        cout << "-----------------------------------------------------" << endl;
    }
}
void validate(int d1, int d2, int m1, int m2, int y1, int y2)
{
    if ((d1 <= 0) || (d1 > 31) || (d2 <= 0) || (d2 > 31) || (m1 <= 0) || (m1 > 12) || (m2 <= 0) || (m2 > 12) || (y1 < 1999) || (y1 >= 2025) || (y1 < 1999) || (y1 >= 2025))
    {
        cout << "Invalid date, please try again!" << endl;
        getdate();
    }
}
void gettime()
{
    int s1, s2, e1, e2;
    cout << "\nEnter start time for the first appointment : ";
    cin >> s1;
    cout << "Enter the end time for the first appintment : ";
    cin >> e1;

    cout << "\nEnter start time for the second appointment :";
    cin >> s2;
    cout << "\nEnter the end time for the second appointment : ";
    cin >> e2;

    validate(s1, s2, e1, e2);
}
void validate(int s1, int s2, int e1, int e2)
{
    if ((s1 >= 0000 && s1 <= 2300) && (s2 >= 0000 && s2 <= 2300) && (e1 >= 0000 && e1 <= 2359) && (e2 >= 0000 && e2 <= 2359))
    {
        if (s1 % 100 != 0)
        {
            cout << "\nAppointment start at a full hour!"<<endl;
            gettime();
        }
        else if (s2 % 100 != 0)
        {
            cout << "\nAppointment start at a full hour!"<<endl;
            gettime();
        }
        else if ( s1 > e1 || s2 > e2 )
        {
            cout<<"Incorrect timings. please check again."<<endl;
            gettime();
        }
        else
            isoverlapping(s1, s2, e1, e2);
    }
    else
    {
        cout << "\n\n"
             << endl;
        cout << "You have entered wrong timings\nPlease try again." << endl;
        gettime();
    }
}
void isoverlapping(int s1, int s2, int e1, int e2)
{
    if (s1 == s2 || (s1 > s2 && e2 > s1) || (s1 < s2 && e1 > s2))
    {
        cout << "-------Attention!-------" << endl;
        cout << "Appointments overlap!!!!" << endl;
        cout << "------------------------" << endl;
    }
    else
    {
        cout << "--------------------------" << endl;
        cout << "Appointments wont overlap!" << endl;
        cout << "--------------------------" << endl;
    }
}