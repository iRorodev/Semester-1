#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int row, column;
    float total, oncount = 0, percentage;
    cout << "Enter number of rows :: ";
    cin >> row;
    cout << "Enter number of columns :: ";
    cin >> column;

    total = row * column;

    int array[row][column];
    cout << "\n\nEnter the sensor data :: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cin >> array[i][j];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (array[i][j] != 0 && array[i][j] != 1)
            {
                cout << array[i][j] << " is not a valid input at " << i+1 << " & " << j+1 << endl;
                cout << "0 is for off and 1 is for On, if u enter incorrectly again it will be treated as Off." << endl;
                cout << "Please Re-enter :: ";
                cin >> array[i][j];
            }
        }
    }

    cout << "\nSensor Grid :: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (array[i][j] == 1)
                cout << "X ";
            else
                cout << ". ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (array[i][j] == 1)
                oncount++;
        }
    }

    percentage = (oncount / total) * 100;

    cout << "\n\nPrecentage of senors on = " << percentage << endl;
    return 0;
}
