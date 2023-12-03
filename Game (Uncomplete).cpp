#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
// global array cause most functions it and i dont have to pass it around
char chessboard[8][8];
// to dipaly the array
void displaychessboard()
{
    cout << "  \u001b[1;31m0 1 2 3 4 5 6 7\u001b[1;0m" << endl; // print first row to represent columns
    for (int i = 0; i < 8; i++)
    {
        cout << "\u001b[1;31m" << i << "\u001b[1;0m "; // spaces to make everything neat and clean
        for (int j = 0; j < 8; j++)
            cout << chessboard[i][j] << " ";
        cout << endl;
    }
}
// to initialize array so it dont take garbage value
void initializearray()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            chessboard[i][j] = ' '; // else they will take grbage value
    }
}
// fancy text messages
void introduction()
{
    cout << "\t\t\t-------------------------------------------------------------------\n";
    cout << "\t\t\t\t\t\u001b[1;31mCreated by 22i8787 Fizza Ali :)\u001b[1;0m";
    cout << "\n\t\t\t-------------------------------------------------------------------\n"
         << endl;
    Sleep(1500);
    system("cls");
}
void goodbai()
{
    cout << "\t\t\t-------------------------------------------------------------------\n";
    cout << "\t\t\t\t\t                \u001b[1;31mGoodBai :)\u001b[1;0m";
    cout << "\n\t\t\t-------------------------------------------------------------------\n"
         << endl;
    Sleep(1500);
    system("cls");
}
void error()
{
    cout << "\t\t\t-------------------------------------------------------------------\n";
    cout << "\t\t\t\t\t            \u001b[1;31mIncorrect Input\u001b[1;0m";
    cout << "\n\t\t\t-------------------------------------------------------------------\n"
         << endl;
    Sleep(1500);
    system("cls");
}
void gamefinish()
{
    cout << "\t\t\t-------------------------------------------------------------------\n";
    cout << "\t\t\t\t\t            \u001b[1;31mGame has been finsihed\u001b[1;0m";
    cout << "\n\t\t\t-------------------------------------------------------------------\n"
         << endl;
    Sleep(2500);
    system("cls");
}
// functions for part 1 your next move
void selectpiece(int &piece)
{
    cout << " \u001b[1;31mPlease enter your piece:\u001b[1;0m" << endl;
    cout << " (0) Exit.\n (1) King.\n (2) Queen.\n (3) Knight.\n (4) Rook.\n (5) Bishop.\n Enter: ";
    while (true)
    {
        cin >> piece;
        if (piece >= 0 && piece <= 5)
            break;
        error();
    }
}
void locationinput(int &row, int &column)
{
    cout << " \u001b[1;31mPlease enter your piece's location:\u001b[1;0m" << endl;
    cout << " Enter (row x column): ";
    while (true)
    {
        cin >> row >> column;
        if (row >= 0 && row <= 7 && column >= 0 && column <= 7)
            break;
        error();
    }
}
void markPossibleMovement(int row, int column)
{
    if (row >= 0 && row <= 7 && column >= 0 && column <= 7)
        chessboard[row][column] = 'o';
}
void kingmovement(int row, int column)
{
    cout << "Your piece's location has been marked by \"K\"" << endl;
    cout << "Next Possible movements have been marked by \"o\"" << endl;
    markPossibleMovement(row - 1, column - 1); // top left
    markPossibleMovement(row - 1, column);     // top
    markPossibleMovement(row - 1, column + 1); // top right
    markPossibleMovement(row, column - 1);     // left
    markPossibleMovement(row, column + 1);     // right
    markPossibleMovement(row + 1, column - 1); // bottom left
    markPossibleMovement(row + 1, column);     // bottom
    markPossibleMovement(row + 1, column + 1); // bottom right
    chessboard[row][column] = 'K';
}
void queenmovemnt(int row, int column) // this is how queen moves
{
    cout << "Your piece's location has been marked by \"Q\"" << endl;
    cout << "Next Possible movements have been marked by \"o\"" << endl;
    for (int i = 0; i < 8; i++)
    {
        markPossibleMovement(row, i);    // column wise
        markPossibleMovement(i, column); // row wise
    }
    int temprows1 = row - 1;
    int temprows2 = row + 1;
    int tempcolumns1 = column - 1;
    int tempcolumns2 = column + 1;
    while (temprows1 >= 0 || temprows2 <= 7)
    {
        markPossibleMovement(temprows1, tempcolumns1); // top left
        markPossibleMovement(temprows1, tempcolumns2); // top right
        markPossibleMovement(temprows2, tempcolumns1); // bottom left
        markPossibleMovement(temprows2, tempcolumns2); // bottom right

        tempcolumns1--;
        tempcolumns2++;
        temprows1--;
        temprows2++;
    }
    chessboard[row][column] = 'Q';
}
void knightmovement(int row, int column) // this is how knight moves
{
    cout << "Your piece's location has been marked by \"K\"" << endl;
    cout << "Next Possible movements have been marked by \"o\"" << endl;
    markPossibleMovement(row - 2, column - 1); // 2 steps up and 1 step left
    markPossibleMovement(row - 2, column + 1); // 2 steps up and 1 step right
    markPossibleMovement(row - 1, column - 2); // 2 steps left and 1 step up
    markPossibleMovement(row - 1, column + 2); // 2 steps right and 1 step up
    markPossibleMovement(row + 1, column - 2); // 2 steps left and 1 step down
    markPossibleMovement(row + 1, column + 2); // 2 steps right and 1 step down
    markPossibleMovement(row + 2, column - 1); // 2 steps down and 1 step left
    markPossibleMovement(row + 2, column + 1); // 2 steps down and 1 step right
    chessboard[row][column] = 'K';
}
void rockmovement(int row, int column) // this is how rock moves
{
    cout << "Your piece's location has been marked by \"R\"" << endl;
    cout << "Next Possible movements have been marked by \"o\"" << endl;
    for (int i = 0; i < 8; i++)
    {
        markPossibleMovement(row, i);    // column wise
        markPossibleMovement(i, column); // row wise
    }
    chessboard[row][column] = 'R';
}
void bishopmovement(int row, int column) // this is how bishop moves
{
    int temprows1 = row - 1;
    int temprows2 = row + 1;
    int tempcolumns1 = column - 1;
    int tempcolumns2 = column + 1;
    while (temprows1 >= 0 || temprows2 <= 7)
    {
        markPossibleMovement(temprows1, tempcolumns1);
        markPossibleMovement(temprows1, tempcolumns2);
        markPossibleMovement(temprows2, tempcolumns1);
        markPossibleMovement(temprows2, tempcolumns2);

        tempcolumns1--;
        tempcolumns2++;
        temprows1--;
        temprows2++;
    }
    chessboard[row][column] = 'B';
}
void yournextmove() // main part of the game
{
    system("cls");
    int piece, row, column;
    do
    {
        selectpiece(piece);
        if (piece == 0)
            break;
        initializearray();
        locationinput(row, column);

        if (piece == 1) // LONG LIVE THE KING :D
            kingmovement(row, column);
        else if (piece == 2) // FOr ThE QueeeEN :)
            queenmovemnt(row, column);
        else if (piece == 3) // for night
            knightmovement(row, column);
        else if (piece == 4) // for rook
            rockmovement(row, column);
        else // for bimarket
            bishopmovement(row, column);

        displaychessboard();
        system("pause");
        system("cls");
    } while (piece != 0);
}
// save the king game fucntion();
void putpieces(int &piece, int &kingrow, int &kingcol, int &row1, int &col1, int &row2, int &col2) // put pieces in array / chess board
{
    srand(time(0));
    kingrow = rand() % 8;
    kingcol = rand() % 8;
    chessboard[kingrow][kingcol] = 'X';
    switch (piece)
    {
    case 1:
        do
        {
            row1 = rand() % 8;
            col1 = rand() % 8;
        } while (chessboard[row1][col1] == 'X');
        chessboard[row1][col1] = 'Q';
        break;
    case 2:
        do
        {
            row1 = rand() % 8;
            col1 = rand() % 8;
            row2 = rand() % 8;
            col2 = rand() % 8;
        } while (chessboard[row1][col1] != ' ' || chessboard[row2][col2] != ' ');
        chessboard[row1][col1] = 'B';
        chessboard[row2][col2] = 'B';
        break;
    case 3:
        do
        {
            row1 = rand() % 8;
            col1 = rand() % 8;
            row2 = rand() % 8;
            col2 = rand() % 8;
        } while (chessboard[row1][col1] != ' ' || chessboard[row2][col2] != ' ');
        chessboard[row1][col1] = 'R';
        chessboard[row2][col2] = 'R';

        break;
    case 4:
        do
        {
            row1 = rand() % 8;
            col1 = rand() % 8;
            row2 = rand() % 8;
            col2 = rand() % 8;
        } while (chessboard[row1][col1] != ' ' || chessboard[row2][col2] != ' ');
        chessboard[row1][col1] = 'K';
        chessboard[row2][col2] = 'K';
        break;
    }
}
char thepiece(int &piece) // returns the symbol of piece needed
{
    if (piece == 1)
        return 'Q';
    else if (piece == 2)
        return 'B';
    else if (piece == 3)
        return 'R';
    else
        return 'K';
}
bool checkkingmove(int oldkingrow, int oldkingcol, int newkingrow, int newkingcol) // to see if king move is valid
{
    if (oldkingrow - 1 == newkingrow && oldkingcol - 1 == newkingcol) // top left
        return true;
    else if (oldkingrow - 1 == newkingrow && oldkingcol == newkingcol) // top
        return true;
    else if (oldkingrow - 1 == newkingrow && oldkingcol + 1 == newkingcol) // top right
        return true;
    else if (oldkingrow == newkingrow && oldkingcol - 1 == newkingcol) // left
        return true;
    else if (oldkingrow == newkingrow && oldkingcol + 1 == newkingcol) // right
        return true;
    else if (oldkingrow + 1 == newkingrow && oldkingcol - 1 == newkingcol) // bottom left
        return true;
    else if (oldkingrow + 1 == newkingrow && oldkingcol == newkingcol) // bottom
        return true;
    else if (oldkingrow + 1 == newkingrow && oldkingcol + 1 == newkingcol) // bottom left
        return true;
    else
        return false;
}
bool checkenemymove(int piece, int frompiecerow, int frompiececol, int tonewpiecerow, int tonewpiececol) // to see if opponent move is valid or not
{
    if (piece == 1)
    {
        for (int i = 0; i < 8; i++)
        {
            if (i == tonewpiecerow && frompiececol == tonewpiececol)
                return true;
            if (frompiecerow == tonewpiecerow && i == tonewpiececol)
                return true;
        }
        int temprows1 = frompiecerow - 1;
        int temprows2 = frompiecerow + 1;
        int tempcolumns1 = frompiececol - 1;
        int tempcolumns2 = frompiececol + 1;
        while (temprows1 >= 0 || temprows2 <= 7)
        {
            if (temprows1 >= 0)
            {
                if (temprows1 == tonewpiecerow && tempcolumns1 == tonewpiececol) // top left -->
                    return true;
                if (temprows1 == tonewpiecerow && tempcolumns2 == tonewpiececol) // top right -->
                    return true;
            }
            if (temprows2 <= 7)
            {
                if (temprows2 == tonewpiecerow && tempcolumns1 == tonewpiececol) // bottom left -->
                    return true;
                if (temprows2 == tonewpiecerow && tempcolumns2 == tonewpiececol) // bottom right -->
                    return true;
            }
            tempcolumns1--;
            tempcolumns2++;
            temprows1--;
            temprows2++;
        }
        return false;
    }
    else if (piece == 2)
    {
        int temprows1 = frompiecerow - 1;
        int temprows2 = frompiecerow + 1;
        int tempcolumns1 = frompiececol - 1;
        int tempcolumns2 = frompiececol + 1;
        while (temprows1 >= 0 || temprows2 <= 7)
        {
            if (temprows1 >= 0)
            {
                if (temprows1 == tonewpiecerow && tempcolumns1 == tonewpiececol) // top left -->
                    return true;
                if (temprows1 == tonewpiecerow && tempcolumns2 == tonewpiececol) // top right -->
                    return true;
            }
            if (temprows2 <= 7)
            {
                if (temprows2 == tonewpiecerow && tempcolumns1 == tonewpiececol) // bottom left -->
                    return true;
                if (temprows2 == tonewpiecerow && tempcolumns2 == tonewpiececol) // bottom right -->
                    return true;
            }
            tempcolumns1--;
            tempcolumns2++;
            temprows1--;
            temprows2++;
        }
        return false;
    }
    else if (piece == 3)
    {
        for (int i = 0; i < 8; i++)
        {
            if (i == tonewpiecerow && frompiececol == tonewpiececol)
                return true;
            if (frompiecerow == tonewpiecerow && i == tonewpiececol)
                return true;
        }
        return false;
    }
    else
    {
        if (frompiecerow - 2 == tonewpiecerow && frompiececol - 1 == tonewpiececol) // 2 steps up and 1 step left
            return true;
        else if (frompiecerow - 2 == tonewpiecerow && frompiececol + 1 == tonewpiececol) // 2 steps up and 1 step right
            return true;
        else if (frompiecerow - 1 == tonewpiecerow && frompiececol - 2 == tonewpiececol) // 2 steps left and 1 step up
            return true;
        else if (frompiecerow - 1 == tonewpiecerow && frompiececol + 2 == tonewpiececol) // 2 steps right and 1 step up
            return true;
        else if (frompiecerow + 1 == tonewpiecerow && frompiececol - 2 == tonewpiececol) // 2 steps left and 1 step down
            return true;
        else if (frompiecerow + 1 == tonewpiecerow && frompiececol + 2 == tonewpiececol) // 2 steps right and 1 step down
            return true;
        else if (frompiecerow + 2 == tonewpiecerow && frompiececol - 1 == tonewpiececol) // 2 steps down and 1 step left
            return true;
        else if (frompiecerow + 2 == tonewpiecerow && frompiececol + 1 == tonewpiececol) // 2 steps down and 1 step right
            return true;
        else
            return false;
    }
}
bool checkopponentwin() // to see if opponent has won or not
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] == 'X')
                return false;
        }
    }
    return true;
}
bool checkkingwin() // to see if king has won or not
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chessboard[i][j] != ' ' && chessboard[i][j] != 'X')
                return false;
        }
    }
    return true;
}
void savetheking() // save the king game
{
    int piece;
    do
    {
        system("cls");                                                       // to clean the system
        initializearray();                                                   // initaialize array so no jum value
        cout << "\u001b[1;31mPlease Select The piece :\u001b[1;0m " << endl; // fancy input
        cout << "(0) Exit\n(1) Queen\n(2) Bishop\n(3) Rock\n(4) Knight\n\u001b[1;31mEnter ::\u001b[1;0m ";
        cin >> piece;   // input
        if (piece == 0) // if user enter zero break
            break;
        if (piece < 0 || piece > 4) // if wrong input
            error();
        else
        {
            int kingrow, kingcol, piece1row, piece1col, piece2row, piece2col;                // location of pieces
            putpieces(piece,kingrow, kingcol, piece1row, piece1col, piece2row, piece2col);   // put the pieces in 8x8 array
            system("cls");                                                                   // clean the old msges
            cout << "-------------------------------------------------------------" << endl; // guide
            cout << "As You can see below, Your King peice has been marked by X" << endl;
            cout << "While The opponents peice has been marked by Respective Symbol." << endl;
            cout << "-------------------------------------------------------------" << endl;
            bool gamefinished = false;                                              // cause game is not finsihed
            int newkingrow, newkingcol, oldkingrow = kingrow, oldkingcol = kingcol; // to new location for king
            int frompiecerow, frompiececol, tonewpiecerow, tonewpiececol;           // same but for enemy piece (s)
            do
            {
            kingmove: // king move part
                displaychessboard();
                cout << "-------------------------------------------------------------" << endl;
                cout << "its the \u001b[1;31m\"Kings\"\u001b[1;0m turn to move." << endl;
                cout << "Please Enter the new cords where you want to move the King to (r x c) ::  ";
                cin >> newkingrow >> newkingcol;
                if (checkkingmove(oldkingrow, oldkingcol, newkingrow, newkingcol))
                {
                    chessboard[oldkingrow][oldkingcol] = ' ';
                    chessboard[newkingrow][newkingcol] = 'X';
                    oldkingrow = newkingrow;
                    oldkingcol = newkingcol;
                }
                else
                {
                    error();
                    goto kingmove;
                }
                if (checkkingwin())
                {
                    gamefinish();
                    gamefinished = true;
                    break;
                }
            opponentmove: // opponentmove part
                displaychessboard();
                cout << "-------------------------------------------------------------" << endl;
                cout << "Now its time for \u001b[1;31m\"Opponent's\"\u001b[1;0m Turn" << endl;
                cout << "Enter location of piece first and then new location (r x c x r x c) :: ";
                cin >> frompiecerow >> frompiececol >> tonewpiecerow >> tonewpiececol;
                if (chessboard[frompiecerow][frompiececol] != ' ' && chessboard[frompiecerow][frompiececol] != 'X' && checkenemymove(piece, frompiecerow, frompiececol, tonewpiecerow, tonewpiececol))
                {
                    chessboard[frompiecerow][frompiececol] = ' ';
                    chessboard[tonewpiecerow][tonewpiececol] = thepiece(piece);
                }
                else
                {
                    error();
                    goto opponentmove;
                }
                if (checkopponentwin())
                {
                    gamefinish();
                    gamefinished = true;
                    break;
                }
            } while (!gamefinished);
        }
    } while (piece != 0);
}
// start of the game
void start()
{
    introduction(); // introduction??
    int gamemode;   // selecting the gamemode
    do
    {
        srand(time(0)); // for randomize functions later on :(
        system("cls");  // clean the screen
        cout << " Welcome to the Game. We have two game modes." << endl;
        cout << " ( 1 ) Your Next Move " << endl;
        cout << " ( 2 ) Save the King ( 2 player )" << endl;
        cout << " ( 0 ) Exit the game " << endl;
        cout << " \u001b[1;31mEnter ::\u001b[1;0m ";
        cin >> gamemode;
        if (gamemode == 0)
            break;
        else if (gamemode == 1)
            yournextmove();
        else if (gamemode == 2)
            savetheking();
        else // any other number except 0 1 2
            error();
    } while (gamemode != 0);
    goodbai(); // fancy goobai
}
// main function of two statements
int main()
{
    start(); // as given is the project pdf
    return 0;
}