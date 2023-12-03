#include <iostream>
using namespace std;

int main()
{
    char array[3][3];
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
            array[a][b] = '*';
    }
    int i = 1;
    int row, column;
    while (true)
    {
        i++;
        if (i % 2 == 0)
        {
            cout << "Where does user 1 want to place X  ( rxc) : ";
            cin >> row >> column;
            array[row][column] = 'X';
        }
        else
        {
            cout << "Where does user 2 want to place O  ( rxc) : ";
            cin >> row >> column;
            array[row][column] = 'O';
        }
        cout << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << endl;
            for (int j = 0; j < 3; j++)
                cout << array[i][j] << " ";
        }
        cout << endl;
        if (array[0][0] == array[0][1] && array[0][1] == array[0][2] && array[0][2] == 'X')
        {
            cout << " Player 1 has won the game : " << endl;
            break;
        }
        else if (array[1][0] == array[1][1] && array[1][1] == array[1][2] && array[1][2] == 'X')
        {
            cout << " Player 1 has won the game : " << endl;
            break;
        }
        else if (array[2][0] == array[2][1] && array[2][1] == array[2][2] && array[2][2] == 'X')
        {
            cout << " Player 1 has won the game : " << endl;
            break;
        }

        else if (array[0][0] == array[1][0] && array[1][0] == array[2][0] && array[2][0] == 'X')
        {
            cout << " Player 1 has won the game : " << endl;
            break;
        }
        else if (array[0][1] == array[1][1] && array[1][1] == array[2][1] && array[2][1] == 'X')
        {
            cout << " Player 1 has won the game : " << endl;
            break;
        }
        else if (array[0][2] == array[1][2] && array[1][2] == array[2][2] && array[2][2] == 'X')
        {
            cout << " Player 1 has won the game : " << endl;
            break;
        }

        else if (array[0][0] == array[1][1] && array[1][1] == array[2][2] && array[2][2] == 'X')
        {
            cout << " Player 1 has won the game : " << endl;
            break;
        }
        else if (array[2][0] == array[1][1] && array[1][1] == array[2][0] && array[2][0] == 'X')
        {
            cout << " Player 1 has won the game : " << endl;
            break;
        }
        //-----------------------------------------------------------------------
        if (array[0][0] == array[0][1] && array[0][1] == array[0][2] && array[0][2] == 'O')
        {
            cout << " Player 2 has won the game : " << endl;
            break;
        }
        else if (array[1][0] == array[1][1] && array[1][1] == array[1][2] && array[1][2] == 'O')
        {
            cout << " Player 2 has won the game : " << endl;
            break;
        }
        else if (array[2][0] == array[2][1] && array[2][1] == array[2][2] && array[2][2] == 'O')
        {
            cout << " Player 2 has won the game : " << endl;
            break;
        }

        else if (array[0][0] == array[1][0] && array[1][0] == array[2][0] && array[2][0] == 'O')
        {
            cout << " Player 2 has won the game : " << endl;
            break;
        }
        else if (array[0][1] == array[1][1] && array[1][1] == array[2][1] && array[2][1] == 'O')
        {
            cout << " Player 2 has won the game : " << endl;
            break;
        }
        else if (array[0][2] == array[1][2] && array[1][2] == array[2][2] && array[2][2] == 'O')
        {
            cout << " Player 2 has won the game : " << endl;
            break;
        }

        else if (array[0][0] == array[1][1] && array[1][1] == array[2][2] && array[2][2] == 'O')
        {
            cout << " Player 2 has won the game : " << endl;
            break;
        }
        else if (array[2][0] == array[1][1] && array[1][1] == array[2][0] && array[2][0] == 'O')
        {
            cout << " Player 2 has won the game : " << endl;
            break;
        }
    }
    return 0;
}

/* Chatgpt Made this :D 
#include <iostream>
using namespace std;

const int BOARD_SIZE = 3;

void print_board(char board[][BOARD_SIZE])
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

bool check_winner(char board[][BOARD_SIZE], char player)
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}

int main()
{
    char board[BOARD_SIZE][BOARD_SIZE] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int moves = 0;
    bool is_player1_turn = true;

    while (moves < BOARD_SIZE * BOARD_SIZE)
    {
        print_board(board);
        int position;
        cout << "Player " << (is_player1_turn ? "1" : "2") << ", enter a position: ";
        cin >> position;

        int row = (position - 1) / BOARD_SIZE;
        int col = (position - 1) % BOARD_SIZE;

        if (board[row][col] != 'X' && board[row][col] != 'O')
        {
            board[row][col] = is_player1_turn ? 'X' : 'O';

            if (check_winner(board, is_player1_turn ? 'X' : 'O'))
            {
                print_board(board);
                cout << "Player " << (is_player1_turn ? "1" : "2") << " wins!" << endl;
                break;
            }

            moves++;
            is_player1_turn = !is_player1_turn;
        }
        else
            cout << "Invalid move. Please try again." << endl;
    }

    if (moves == BOARD_SIZE * BOARD_SIZE)
    {
        print_board(board);
        cout << "It's a draw!" << endl;
    }
    return 0;
} */