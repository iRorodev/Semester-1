#include <iostream>
using namespace std;

int fact(int n);
int main()
{
    int rows, n, k;
    cout << "Enter number of rows :: ";
    cin >> rows;

    // Initializing Pascal's 3 Triangle
    int PTriangle[25][25];     // number of rows = number of column // [rpw][row] doesnt work
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
            PTriangle[i][j] = 0;       // assign value
    }
    PTriangle[0][0] = 1; // first element always 1
    // Calculating the rest of Pascal's triangle
    for (int i = 1; i < rows; i++) // loop, we skip i = 0  cause 0,0 to 1 ho gya na and next elemet is 1,0
    {
        PTriangle[i][0] = 1; // new row always start with 1
        for (int j = 1; j < rows; j++)
            PTriangle[i][j] = PTriangle[i - 1][j - 1] + PTriangle[i - 1][j]; // adding elemtes of previous row. New element = element on top left diagonal + elemet above it
    }
    // Dsiplaying Pascal's triangle
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++) // kyu ke triangle hai and agr j < rows likhte to square ban jata which is wrong
            cout << PTriangle[i][j] << " ";
        cout << endl;
    }
    cout << "Enter n & k :: ";
    cin >> n >> k;
    int C = fact(n) / (fact(k) * fact(n - k)); // formula given in question
    cout << "C(" << n << ", " << k << ") = " << C << endl;

    return 0;
}
// Function to calculate the fact of a number
int fact(int num)
{
    if (num == 0 || num == 1) // 0! = 1 or 1 is the last number we multiply till
        return 1;
    else
        return num * fact(num - 1); // if n = 5, then return will be equal to 5*(4*(3*(2*1)))
}
