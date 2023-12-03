// Muhammad Rohail 22i8776 SE-A Question 3 BattleShip game
#include <bits/stdc++.h>
using namespace std;

void checkwin(char grid[][20], int size, int score)
{
    int count = 0;
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (grid[i][j] != 'S')
            {
                count++;
                if (count == 400)
                {
                    cout << "-----------------------------------------" << endl;
                    cout << "Congratulations you have won the game :)" << endl;
                    cout << "Your score is " << score << endl;
                    cout << "-----------------------------------------" << endl;
                    exit(0);
                }
            }
        }
    }
}
void Displaygrid(char grid[][20], int size)
{
    cout << "     0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9" << endl; // print first row to represent columns
    for (int i = 0; i < 20; i++)
    {
        cout << i;
        if (i < 10)
            cout << "    "; // spaces to make everything neat and clean
        else
            cout << "   ";
        // above condiotions prints numbers to represent rows

        for (int j = 0; j < 20; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    system("cls");
    char grid[20][20]; // grid of 20x 20
    char temp;
    int lenghtofships[5] = {7, 5, 4, 3, 3}; // Default size of the ships
    int row, column;
    char direction;

    cout << " Welcome to BattleShip Game <3 " << endl; // Greettings
    cout << " To begin with you have 5 ships of size \" 7 5 4 3 3 \"  " << endl;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
            grid[i][j] = '~'; // water
    }
    // initialize grid so it give no baka value :(
    Displaygrid(grid, 20);
    for (int i = 0; i < 5; i++) // since ships are 5 and first ship is at index 0 :)
    {
        cout << "-------------------------------------------------------------------------------------------------------" << endl; // Pretty cout
        cout << " where do you want to place ship " << i + 1 << " of size " << lenghtofships[i] << " ( r x c) (h / v) : ";         // ask the user to input cords of ships
        cin >> row >> column >> direction;
        if (direction == 'v') // if user wants ship vertically
        {
            int check = 1;                                                 // check is 1 by default
            for (int a = row, b = column; a < row + lenghtofships[i]; a++) // checks teh cords
            {
                if (grid[a][b] == 'S') // if any ships exists it gives error
                {
                    cout << "--------------------------------------------------------------------" << endl;
                    cout << "cannot place a ship because already a ship exists in such cordinates" << endl;
                    cout << "--------------------------------------------------------------------" << endl; // pretty cout
                    check = 0;                                                                              // anything wrong and check = 0
                    i = i - 1;                                                                              // to cancle the increment of i for next ship so user eneters same ship again
                    break;                                                                                  // break the loop when error come and ask user to eneter again
                }
                else if (row < 0 || row + lenghtofships[i] > 19 || column < 0 || column > 19) // checks the cords so user cant enter bad cords
                {
                    cout << "------------------------------------------" << endl;
                    cout << "cannot place ship since it goes out of map" << endl;
                    cout << "------------------------------------------" << endl; // pretty cout
                    check = 0;                                                    // anything wrong and check = 0
                    i = i - 1;                                                    // to cancle the increment of i for next ship so user eneters same ship again
                    break;                                                        // break the loop when error come and ask user to eneter again
                }
            }
            if (check == 1) // if everthing is correct
            {
                temp = lenghtofships[i]; // temp = lenght of ship
                while (temp > 0)
                {
                    grid[row][column] = 'S'; // declares ship as S
                    row++;                   // increases row cus vertically row increases and column remains same
                    temp--;                  // decreases temp as many times as lenght of ship
                }
                cout << "------------------------" << endl;
                cout << "Ship placed successfully" << endl; // pretty cout
                cout << "------------------------" << endl;
            }
        }
        else if (direction == 'h') // if user wants horizontal ship
        {
            int check = 1;                                                    // check will be 1 if everything okay
            for (int a = row, b = column; b < column + lenghtofships[i]; b++) // to check the cords
            {
                if (grid[a][b] == 'S') // if any ships exists it gives error
                {
                    cout << "--------------------------------------------------------------------" << endl;
                    cout << "cannot place a ship because already a ship exists in such cordinates" << endl;
                    cout << "--------------------------------------------------------------------" << endl; // pretty cout
                    check = 0;                                                                              // anything wrong and check = 0
                    i = i - 1;                                                                              // to cancle the increment of i for next ship so user eneters same ship again
                    break;                                                                                  // break the loop when error come and ask user to eneter again
                }
                else if (row < 0 || row > 19 || column < 0 || column + lenghtofships[i] > 19) // to check if cords exists

                {
                    cout << "------------------------------------------" << endl;
                    cout << "cannot place ship since it goes out of map" << endl;
                    cout << "------------------------------------------" << endl; // pretty cout
                    check = 0;                                                    // anything wrong and check = 0
                    i = i - 1;                                                    // to cancle the increment of i for next ship so user eneters same ship again
                    break;                                                        // break the loop when error come and ask user to eneter again
                }
            }
            if (check == 1)
            {
                temp = lenghtofships[i]; // temp = lenght of ship
                while (temp > 0)
                {
                    grid[row][column] = 'S'; // S = ship
                    column++;                // increases column cus horizontally column increases and row remains same
                    temp--;                  // decreases temp as many times as lenght of ship
                }
                cout << "------------------------" << endl;
                cout << "Ship placed successfully" << endl; // pretty cout
                cout << "------------------------" << endl;
            }
        }
        else
        {
            i = i - 1;
            cout << "---------------------" << endl;
            cout << "invlaide orientation" << endl;
            cout << "--------------------" << endl;
        }
        Displaygrid(grid, 20);
    }
    cout << "-----------------------------------------------------" << endl;
    cout << "Congratulations you have all the ships successfully  " << endl; // pretty cout <3
    cout << "Take a moment a see where you have placed your ships " << endl;
    cout << "-----------------------------------------------------" << endl;
    system("pause");
    system("cls");
    char array[20][20]; // initializing another array to display to user when playing to hide the ships
    // initializing another array to display to user :
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
            array[i][j] = '~';
    }
    cout << "Instructions :" << endl; // display instructions of ship to the user
    cout << "You have 5 tries to guess the location of ship and hit it" << endl;
    cout << "Everytime you miss you lose a life" << endl;
    cout << "Score = total number of hits " << endl;
    system("pause"); // pause the system so user can read
    system("cls");   // clear skin

    int lives = 5, score = 0; // default lives and scores

    while (lives > 0)
    {
        Displaygrid(array, 20); // to display new array
        cout << "Enter cordinates of the ship that you want to hit : ";
        cin >> row >> column;
        if (row >= 0 && row < 20 && column >= 0 && column < 20)
        {
            if (grid[row][column] == 'S') // sees if ship is there
            {
                array[row][column] = 'X'; // assign X to target hit
                grid[row][column] = 'X';
                cout << "--------------------------" << endl; // pretty cout
                cout << "A ship has been hit. nicely done" << endl;
                cout << "--------------------------" << endl;
                score = score + 1; // if hot score + 1
            }
            else // if no ship
            {
                array[row][column] = 'M'; // assign X to target hit
                cout << "--------------------------" << endl;
                cout << "Missed the targe. Try again" << endl; // miss the target
                lives = lives - 1;
                cout << "You have " << lives << " lives left" << endl; // display liv
                cout << "------------------------------" << endl;
            }
        }
        else
            cout << "Wrong cordinates , enter again" << endl; // if wrong cords enter
        checkwin(grid, 20, score);
    }
    Displaygrid(grid, 20);
    cout << "Game over :" << endl; // end
    cout << "Your score : " << score << endl;
    return 0;
}