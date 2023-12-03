#include <iostream>
#include <ctime> // for time() function
using namespace std;

int main()
{
    char array[15][30];
    int price[15];
    int amount, temp, row, col, total= 0, ticketssold = 0, freeseats = 0, choise;
    //------------------------------------------------------------------------------
    srand(time(0));
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            temp = rand() % 2;
            if (temp == 0)
            {
                array[i][j] = '*';
                ticketssold++;
            }
            else
            {
                array[i][j] = '#';
                freeseats++;
            }
        }
    }
    cout << "--------------------------------------------------------------" << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << "Enter price of row " << i + 1 << " :: ";
        cin >> price[i];
    }
    cout << "--------------------------------------------------------------" << endl;
    cout << "   1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0" << endl;
    for (int i = 0; i < 15; i++)
    {
        if (i < 9)
            cout << i + 1 << "  ";
        else
            cout << i + 1 << " ";
        for (int j = 0; j < 30; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
    while (true)
    {
        cout << "--------------------------------------------------------------" << endl;
        cout << " Press 0 to exit the program" << endl;
        cout << " Press 1 to buy new seats " << endl;
        cout << " Press 2 to see total seats sold and remaining seats" << endl;
        cout << " Press 3 to see sold & available seats in a single row" << endl;
        cout << "--------------------------------------------------------------" << endl;
        cout << "Enter :: ";
        cin >> choise;

        if (choise == 0)
            break;
        else if (choise == 1)
        {
            cout << "--------------------------------------------------------------" << endl;
            cout << " The seats with # are empty and you can buy them while the seats with * are already sold " << endl;
            cout << " Please enter the amount ot tickets you want to buy :: ";
            cin >> amount;

            for (int i = 0; i < amount; i++)
            {
                cout << "Enter row number and then the column number for seat no. " << i + 1 << " :: ";
                cin >> row >> col;
                row--;
                col--;

                if (array[row][col] == '#')
                {
                    total += price[row];
                    array[row][col] = '*';
                    ticketssold++;
                    freeseats--;
                    cout << "Updated Seating Plan " << endl;
                    cout << "   1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0" << endl;
                    for (int i = 0; i < 15; i++)
                    {
                        if (i < 9)
                            cout << i + 1 << "  ";
                        else
                            cout << i + 1 << " ";
                        for (int j = 0; j < 30; j++)
                            cout << array[i][j] << " ";
                        cout << endl;
                    }
                    cout << "--------------------------------------------------------------" << endl;
                }
                else
                {
                    cout << "Sorry that seat is not available" << endl;
                    i--;
                    cout << "Please chose another" << endl;
                }
            }
            cout<<"You have bought your seat(s) successfully "<<endl;
            cout<<"Your bill is "<<total<<" Rs "<<endl;
        }
        else if (choise == 2)
        {
            cout << "Total Tickets sold = " << ticketssold << endl;
            cout << "Total Free Seats = " << freeseats << endl;
        }
        else if (choise == 3)
        {
            cout << "Enter row number :: ";
            cin >> row;
            row--;
            int rowfree = 0, rowsold = 0;

            for (int j = 0; j < 30; j++)
            {
                if (array[row][j] == '*')
                    rowsold++;
                else
                    rowfree++;
            }
            cout << "Total Tickets sold in row " << row+1 << " = " << rowsold << endl;
            cout << "Total Free Seats in row " << row+1 << " = " << rowfree << endl;
        }
    }
    return 0;
}
