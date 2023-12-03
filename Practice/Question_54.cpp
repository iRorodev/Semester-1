// Muhammad Rohail 22i8776 SE-A Question 5 Mouse and Cheeze
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, column, mouse_row, mouse_column;
    bool cheezefound = false;

    int maze[9][16] = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42,
                       42, 42, 80, 0, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 42,
                       42, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 42,
                       42, -1, -1, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1, 42,
                       42, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 42,
                       42, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 42,
                       42, 0, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 42,
                       42, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, 42,
                       42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    for (int i = 0; i < 9; i++)
    {
        cout << endl;
        for (int j = 16; j < 16; j++)
            cout << maze[i][j] << " ";
    }

    cout << "-------------------------------------------------------------------------" << endl;
    cout << "Welcome to Mouse and Cheeze game :) Here the mouse has to find the cheeze" << endl;
    cout << "Above maze has been displayed to you. The mouse will try to find the" << endl;
    cout << "in almost 1000 illterations or less." << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "Enter the location of Cheeze : ";
    cin >> row >> column;
    maze[row][column] = 90;

    int illiterations = 0;
    while (illiterations < 1000)
    {

        for (int i = 0; i < 9; i++)
        {
            cout << endl;
            for (int j = 16; j < 16; j++)
                cout << maze[i][j] << " ";
        }

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                if (maze[i][j] == 80)
                {
                    mouse_row = i;
                    mouse_column = j;
                }
            }
        }
        cout << "-------------------------------------------------------------------" << endl;
        cout << "The mouse at location " << mouse_row << " " << mouse_column << endl;
        cout << "-------------------------------------------------------------------" << endl;

        if (cheezefound)
            break;
    }
    return 0;
}