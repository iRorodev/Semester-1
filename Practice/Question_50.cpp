// Muhammad Rohail 22i8776 SE-A Question 1 Matrix Multiplication
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matrix_one[10][10], row_one, column_one;
    int matrix_two[10][10], row_two, column_two;
    // Enter the order first
    cout << "Don't Enter rows or column greater than 10 " << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Enter order of First matrix ( r x c) : ";
    cin >> row_one >> column_one;
    cout << "Enter order of Second matrix ( r x c) : ";
    cin >> row_two >> column_two;
    // Number of column of first matrix must be equal to rows on second matrix to multiply;
    if (column_one != row_two)
    {
        cout << endl;
        cout << "-_- Multiplication not possible -_-" << endl;
        return 0;
    }
    // Matrix one enter here;
    cout << "--- Enter Matrix One : " << row_one << "x" << column_one << endl;
    for (int i = 0; i < row_one; i++)
    {
        for (int j = 0; j < column_one; j++)
            cin >> matrix_one[i][j];
    }
    // Matrix two enter here;
    cout << "--- Enter Matrix Two : " << row_two << "x" << column_two << endl;
    for (int i = 0; i < row_two; i++)
    {
        for (int j = 0; j < column_two; j++)
            cin >> matrix_two[i][j];
    }
    // Result matrix fro example if you multiply 2x3 and 3x2 martrix then result is 2x2 matrix
    int result_matrix[row_one][column_two];
    // Initlaizing result matrix to be 0 cus it gave junk / garbage values
    for (int i = 0; i < row_one; i++)
    {
        for (int j = 0; j < column_two; j++)
            result_matrix[i][j] = 0;
    }
    // Multiplying the matrixes here
    for (int x = 0; x < row_one; x++)
    {
        for (int y = 0; y < column_two; y++)
        {
            for (int z = 0; z < column_one; z++)
                result_matrix[x][y] = result_matrix[x][y] + (matrix_one[x][z] * matrix_two[z][y]);
        }
    }
    // Displaying the result matrix
    cout << "--- Result Matrix : " << endl;
    for (int i = 0; i < row_one; i++)
    {
        for (int j = 0; j < column_two; j++)
            cout << result_matrix[i][j] << " ";
        cout << endl;
    }
    cout << "\n\n"
         << endl;
    return 0;
}