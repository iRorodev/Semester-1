// Fizza Ali 22i8787 Question 4

#include <iostream>
using namespace std;
int main()
{
    char choise;
    cout << "----------------------------------------------" << endl;
    cout << "Is the scene safe? Y || N :: ";
    cin >> choise;

    if (choise == 'n' || choise == 'N')
    {
        cout << "***Elimnating Hazards***" << endl;
        cout << "\nIs the Hazard eliminated? Y || N :: ";
        cin >> choise;

        if (choise == 'n' || choise == 'N')
        {
            cout << "***Removing Patient from hazards***" << endl;
            cout << "\nIs the paitien removed? Y | N :: ";
            cin >> choise;

            if (choise == 'n' || choise == 'N')
                cout << "***Calling and waiting for backup to make the scene safe***" << endl;
            else if (choise != 'y' && choise != 'Y')
            {
                cout << "Enter correct input next time" << endl;
                return 0;
            }
        }
        else if (choise != 'y' && choise != 'Y')
        {
            cout << "Enter correct input next time" << endl;
            return 0;
        }
    }
    else if (choise != 'y' && choise != 'Y')
    {
        cout << "Enter correct input next time" << endl;
        return 0;
    }

    cout << "***Assessing the patient***" << endl;
    cout << "***Conducting Primary Summary" << endl;
    cout << "***Providing Critical intervention***" << endl;
    cout << "\nIs the patient stable now? Y || N :: ";
    cin >> choise;

    if (choise == 'Y' || choise == 'y')
    {
        cout << "***Patient History***" << endl;
        cout << "***Package Patient***" << endl;
        cout << "***transport" << endl;
        cout << "***checking vitals***" << endl;
        cout << "***reassessing the patient***" << endl;
        cout << "***treating***" << endl;
        cout << "***Handing patient to higher level of care***" << endl;
    }
    else if (choise == 'N' || choise == 'n')
    {
        cout << "***Patient History***" << endl;
        cout << "***checking vitals***" << endl;
        cout << "***reassessent survey***" << endl;
        cout << "***being transport" << endl;
        cout << "***package patient***" << endl;
        cout << "***treating***" << endl;
        cout << "***Handing patient to higher level of care***" << endl;
    }
    else
        cout << "Enter correct input next time" << endl;
    return 0;
}