// BCS231112 MUHAMMAD ROHAIL PROJECT --> 2D BATTLESHIP GAME
#include <bits/stdc++.h>
using namespace std;

int lenghtofships[5] = {7, 5, 4, 3, 3}; // Default size of the ships
char gridplayer1[20][20];               // grid of 20 x 20 for player 1
char gridplayer2[20][20];               // grid of 20 x 20 for player 2

void Displaygrid(char grid[][20]);   // displays the grid
void ChangeLengthofShips();          // displays optiosn interface
void Playergrid(char grid[][20]);    // used to input and make players gird
bool CheckWin(int hits1, int hits2); // used to see if anyone ahs won or not
void StartVSPlayerGame();            // starts game
void VSPlayer();                     // play against a player
void VSComputer();                   // play against computer
void ComputerGrid(char grid[][20]);  // used for computer generated grid
void StartVSComputerGame();          // used to play against the computer

int main()
{
    system("cls"); // to clean the screen
    int choise;    // we inout the choise from user below
    do
    {
        cout << " BCS231112 Project *---------------------------------" << endl;
        cout << " Welcome to 2D BattleShip Game <3 " << endl;
        cout << " ----------------------------------------------------" << endl;
        cout << " Press 1 --> Player vs Player " << endl;
        cout << " Press 2 --> Player vs Computer " << endl;
        cout << " Press 3 --> Change Length of Ship " << endl;
        cout << " Press 0 --> Exit " << endl;
        cout << " Enter :: ";
        cin >> choise;

        if (choise == 1)
            VSPlayer();
        else if (choise == 2)
            VSComputer();
        else if (choise == 3)
            ChangeLengthofShips();
        else
            cout << "Incorrect Option" << endl;

    } while (choise != 0);

    cout << " The game has successfully ended. Thanks for playing " << endl;
    cout << " *** Good Bye :D *** " << endl; // goodbai :(
    return 0;
}

void Displaygrid(char grid[][20])
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
void ChangeLengthofShips()
{
    system("cls");
    cout << " You are Currently Changing the Lenght of Ships " << endl;
    char choise;
    cout << " The size of ships is " << lenghtofships[0] << " " << lenghtofships[1] << " " << lenghtofships[2] << " " << lenghtofships[3] << " " << lenghtofships[4] << " " << endl;
    cout << " Do you want to change the size? Y/N ";
    cin >> choise;
    if (choise == 'y' || choise == 'Y')
    {
        for (int i = 0; i < 5; i++)
        {
            do
            {
                cout << " Enter size of ship " << i + 1 << " : ";
                cin >> lenghtofships[i];
            } while (lenghtofships[i] <= 0);
        }
        cout << " Successfully Changed. " << endl;
    }
    cout << " Returning to Home Screen " << endl;
    system("pause");
    system("cls");
}
void Playergrid(char grid[][20])
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
            grid[i][j] = '~'; // water
    }
    // initialize grid so it give no baka value :(
    Displaygrid(grid);
    char temp;
    int row, column;
    char direction;
    static int i = 1;
    cout << " Its Player " << i << " turn to place Ships" << endl; // Greettings
    cout << " To begin with you have 5 ships of size " << lenghtofships[0] << " " << lenghtofships[1] << " " << lenghtofships[2] << " " << lenghtofships[3] << " " << lenghtofships[4] << " " << endl;
    for (int i = 0; i < 5; i++) // since ships are 5 and first ship is at index 0 :)
    {
        cout << "-------------------------------------------------------------------------------------------------------" << endl; // Pretty cout
        cout << " where does Player 1 want to place ship " << i + 1 << " of size " << lenghtofships[i] << " ( r x c) (h / v) : ";  // ask the user to input cords of ships
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
                else if (row < 0 || row + lenghtofships[i] > 20 || column < 0 || column > 19) // checks the cords so user cant enter bad cords
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
                else if (row < 0 || row > 19 || column < 0 || column + lenghtofships[i] > 20) // to check if cords exists
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
        Displaygrid(grid);
    }
    system("cls");
    cout << "This is The grid of Player 1" << endl;
    Displaygrid(grid);
    system("Pause");
    system("cls");
}
bool CheckWin(int hits1, int hits2)
{
    int limit = 0;
    for (int i = 0; i < 5; i++)
        limit += lenghtofships[i]; // since limit of hits needed to win will always be equal to sum of sizes of al ships

    if (hits1 >= limit)
    {
        cout << "--------------------------" << endl;
        cout << "Player 1 Won" << endl;
        cout << "--------------------------" << endl;
        return true;
    }
    else if (hits2 >= limit)
    {
        cout << "--------------------------" << endl;
        cout << "Player 2 Won" << endl;
        cout << "--------------------------" << endl;
        return true;
    }
    else
        return false;
}
void StartVSPlayerGame()
{
    int i = 1;
    char dummygrid1[20][20]; // initializing another array to display to user when playing to hide the ships
    char dummygrid2[20][20]; // initializing another array to display to user when playing to hide the ships
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            dummygrid1[i][j] = '~'; // else they will take grbage value
            dummygrid2[i][j] = '~';
        }
    }

    cout << "Now that game has started" << endl;
    cout << "Remember, hitting a ship means the next turn is also yours." << endl;
    bool win = false;
    int row, column, hitsplayer1 = 0, hitsplayer2 = 0;
    while (!win) // !false = true and !true = false
    {
        if (i % 2 != 0)
        {
        hit1:
            cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
            Displaygrid(dummygrid1);
            cout << "Its player 1 turn to guess the location of enemy ship" << endl;
            cout << "Please enter the cordinates( row and column) :: ";
            cin >> row >> column;
            bool hit = false;
            if (row < 0 || row > 19 || column < 0 || column > 19)
                cout << "You have entered wrong cordinates\n you have lost you turn" << endl;
            else
            {
                if (gridplayer2[row][column] == 'S') // sees if ship is there
                {
                    dummygrid1[row][column] = 'X'; // assign X to target hit
                    gridplayer2[row][column] = 'X';
                    cout << "--------------------------" << endl; // pretty cout
                    cout << "A ship has been hit. nicely done" << endl;
                    hitsplayer1++;
                    hit = true; // makes it so the same player has the turn
                    cout << "--------------------------" << endl;
                }
                else if (gridplayer1[row][column] == 'X' || gridplayer2[row][column] == 'M')
                    cout << "That location has already been hit\n You just lost your turn" << endl;
                else // if no ship
                {
                    dummygrid1[row][column] = 'M'; // assign M to Missed target
                    cout << "--------------------------" << endl;
                    cout << "Missed the targe. Try again" << endl; // miss the target
                    cout << "------------------------------" << endl;
                }
            }
            system("Pause"); // give time to read
            system("cls");
            if (hit)
                goto hit1;
        }
        else
        {
        hit2:
            cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
            Displaygrid(dummygrid2);
            cout << "Its player 2 turn to guess the location of enemy ship" << endl;
            cout << "Please enter the cordinates( row and column) :: ";
            cin >> row >> column;
            bool hit = false;
            if (row < 0 || row > 19 || column < 0 || column > 19)
                cout << "You have entered wrong cordinates\n you have lost you turn" << endl;
            else
            {
                if (gridplayer1[row][column] == 'S') // sees if ship is there
                {
                    dummygrid2[row][column] = 'X'; // assign X to target hit
                    gridplayer1[row][column] = 'X';
                    cout << "--------------------------" << endl; // pretty cout
                    cout << "A ship has been hit. nicely done" << endl;
                    hit = true; // makes it so the same player has the turn
                    hitsplayer2++;
                    cout << "--------------------------" << endl;
                }
                else if (gridplayer1[row][column] == 'X' || gridplayer1[row][column] == 'M')
                    cout << "That location has already been hit\n You just lost your turn" << endl;
                else // if no ship
                {
                    dummygrid2[row][column] = 'M'; // assign M to Missed target
                    cout << "--------------------------" << endl;
                    cout << "Missed the targe. Try again" << endl; // miss the target
                    cout << "------------------------------" << endl;
                }
            }
            system("Pause"); // give time to read
            system("cls");
            if (hit)
                goto hit2;
        }
        i++;                                      // increment by 1 so it keeps revolving between player 1 and 2 and then 1 and then 2
        win = CheckWin(hitsplayer1, hitsplayer2); // sends the number of hits to function to see if anyone has won or not
    }
}
void VSPlayer()
{
    system("cls"); // clear the old menu

    Playergrid(gridplayer1); // for player 1 to place ships
    Playergrid(gridplayer2); // for player 2 to place ships

    system("cls");
    cout << " Now that Both PLayers have placed there ships the game begins " << endl;
    cout << " You have to Guess where your enemy has a ship and try to hit that " << endl;
    system("pause"); // give time to read

    StartVSPlayerGame(); // game started :D
}
void VSComputer()
{
    srand(time(0));
    system("cls");

    Playergrid(gridplayer1);   // for player 1 to place ships
    ComputerGrid(gridplayer2); // for player 2 to place ships

    system("cls");
    cout << " Now that Both PLayers have placed there ships the game begins " << endl;
    cout << " You have to Guess where your enemy has a ship and try to hit that " << endl;
    system("pause"); // give time to read

    StartVSComputerGame();
}
void ComputerGrid(char grid[][20])
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
            grid[i][j] = '~'; // water
    }
    // initialize grid so it give no baka value :(
    for (int i = 0; i < 5; i++) // since ships are 5 and first ship is at index 0 :)
    {
        int direction = rand() % 2;
        int row = rand() % 20;
        int column = rand() % 20;

        if (direction == 0) // vertical direction
        {
            bool check = true;                                             // check is 1 by default
            for (int a = row, b = column; a < row + lenghtofships[i]; a++) // checks teh cords
            {
                if (grid[a][b] == 'S') // if any ships exists
                {
                    check = false;
                    i = i - 1; // to cancle the increment of i for next ship so user eneters same ship again
                    break;     // break the loop
                }
                else if (row < 0 || row + lenghtofships[i] > 20 || column < 0 || column > 19) // checks the cords so user cant enter bad cords
                {
                    check = false; // anything wrong and check = false
                    i = i - 1;     // to cancle the increment of i for next ship so user eneters same ship again
                    break;         // break the loop
                }
            }
            if (check)
            {
                int temp = lenghtofships[i]; // temp = lenght of ship
                while (temp > 0)
                {
                    grid[row][column] = 'S'; // declares ship as S
                    row++;                   // increases row cus vertically row increases and column remains same
                    temp--;                  // decreases temp as many times as lenght of ship
                }
                cout << "ship " << i + 1 << " has been placed by the computer" << endl;
            }
        }
        else // horizontal direction
        {
            bool check = true;
            for (int a = row, b = column; b < column + lenghtofships[i]; b++) // to check the cords
            {
                if (grid[a][b] == 'S') // if any ships exist
                {
                    check = false;
                    i = i - 1; // to cancle the increment of i for next ship so user eneters same ship again
                    break;     // break the loop
                }
                else if (row < 0 || row > 19 || column < 0 || column + lenghtofships[i] > 20) // to check if cords exists
                {
                    check = false; // anything wrong and check = flase
                    i = i - 1;     // to cancle the increment of i for next ship so user eneters same ship again
                    break;         // break the loop when error come and ask user to eneter again
                }
            }
            if (check)
            {
                int temp = lenghtofships[i]; // temp = lenght of ship
                while (temp > 0)
                {
                    grid[row][column] = 'S'; // S = ship
                    column++;                // increases column cus horizontally column increases and row remains same
                    temp--;                  // decreases temp as many times as lenght of ship
                }
                cout << "ship " << i << " has been placed by the computer" << endl;
            }
        }
    }
    Displaygrid(grid);
    system("pause");
}
void StartVSComputerGame()
{
    char dummygrid1[20][20]; // initializing another array to display to user when playing to hide the ships
    char dummygrid2[20][20]; // initializing another array to display to user when playing to hide the ships
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            dummygrid1[i][j] = '~'; // else they will take grbage value
            dummygrid2[i][j] = '~';
        }
    }
    cout << " Now that game has started" << endl;
    cout << " Remember, hitting a ship means the next turn is also yours." << endl;
    bool win = false;
    int row, column, hitsplayer1 = 0, hitsplayer2 = 0;
    int i = 1;
    while (!win) // !false = true and !true = false
    {
        if (i % 2 != 0)
        {
        hit1:
            cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
            Displaygrid(dummygrid1);
            cout << " Its player 1 turn to guess the location of enemy ship " << endl;
            cout << " Please enter the cordinates( row and column) :: ";
            cin >> row >> column;
            bool hit = false;
            if (row < 0 || row > 19 || column < 0 || column > 19)
                cout << " You have entered wrong cordinates\n you have lost you turn " << endl;
            else
            {
                if (gridplayer2[row][column] == 'S') // sees if ship is there
                {
                    hit = true;                    // makes it so the same player has the turn
                    dummygrid1[row][column] = 'X'; // assign X to target hit
                    gridplayer2[row][column] = 'X';
                    cout << " -------------------------- " << endl; // pretty cout
                    cout << " A ship has been hit. nicely done " << endl;
                    hitsplayer1++;
                    cout << " -------------------------- " << endl;
                }
                else if (gridplayer1[row][column] == 'X' || gridplayer2[row][column] == 'M')
                    cout << "That location has already been hit\n You just lost your turn" << endl;
                else // if no ship
                {
                    dummygrid1[row][column] = 'M'; // assign M to Missed target
                    cout << "--------------------------" << endl;
                    cout << "Missed the targe. Try again" << endl; // miss the target
                    cout << "------------------------------" << endl;
                }
            }
            system("Pause"); // give time to read
            system("cls");
            if (hit)
                goto hit1;
        }
        else
        {
        hit2:
            cout << "Its player 2 / Computer turn to guess the location of enemy ship" << endl;
            row = rand() % 20;
            column = rand() % 20;
            bool hit = false;
            Displaygrid(dummygrid2);
            cout << " Computer guess row = " << row << " column = " << column << endl;
            if (gridplayer1[row][column] == 'S') // sees if ship is there
            {
                dummygrid2[row][column] = 'X'; // assign X to target hit
                gridplayer1[row][column] = 'X';
                cout << "--------------------------" << endl; // pretty cout
                cout << "A ship has been hit. nicely done" << endl;
                i--; // makes it so the same player has the turn
                hitsplayer2++;
                hit = true;
                cout << "--------------------------" << endl;
            }
            else
            {                                  // if no ship
                dummygrid2[row][column] = 'M'; // assign M to Missed target
                cout << "--------------------------" << endl;
                cout << "Missed the targe. Try again" << endl; // miss the target
                cout << "------------------------------" << endl;
            }
            system("Pause"); // give time to read
            system("cls");
            if (hit)
                goto hit2;
        }
        i++;
        win = CheckWin(hitsplayer1, hitsplayer2); // sends the number of hits to function to see if anyone has won or not
    }
}

// 527 lines :D