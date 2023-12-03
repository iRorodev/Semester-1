#include <iostream>
using namespace std;

int TotalNumberofStudents()
{
    int Total;
    do
    {
        cout << "Enter the total number of students :: ";
        cin >> Total;
    } while (Total <= 0);
    return Total;
}
int TotalNumberofAbsenties(int TotalStudents)
{
    int TotalAbsents = 0, Absents;
    for (int i = 1; i <= TotalStudents; i++)
    {
        do
        {
            cout << "Enter the Absenties for student # " << i << " : ";
            cin >> Absents;
        } while (Absents < 0);
        TotalAbsents += Absents;
    }
    return TotalAbsents;
}
double AverageofAbsenties(int TotalStudents, int TotalAbsenties)
{
    double AverageAbsenties = double(TotalAbsenties) / double(TotalStudents);
    return AverageAbsenties;
}
int main()
{
    int TotalStudents = TotalNumberofStudents();
    int TotalAbsenties = TotalNumberofAbsenties(TotalStudents);
    double AverageAbsenties = AverageofAbsenties(TotalStudents, TotalAbsenties);
    cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
    cout << "Average Absenties per student = " << AverageAbsenties << endl;
    cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
    return 0;
}