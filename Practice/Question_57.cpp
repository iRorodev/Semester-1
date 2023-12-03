// Muhammad Rohail 22i8776 BS(SE)-A Question 1 Cramer Rule

#include <iostream>
using namespace std;

int calculatedeterminant(int matrix[][3], int size)
{
    int determinant = 0;
    determinant = determinant + matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[2][1] * matrix[1][2]));
    determinant = determinant - matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[2][0] * matrix[1][2]));
    determinant = determinant + matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[2][0] * matrix[1][1]));
    return determinant;
}

void solve(int matrix_a[3][3], int matrix_b[1][3], char matrix_x[1][3])
{

    int x, y, z;
    int determinant_A = 0, determinant_Ax = 0, determinant_Ay = 0, determinant_Az = 0;
    cout << "Matrix A * Matrix X = Result Matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
            cout << matrix_a[i][j] << " ";

        cout << "      " << matrix_x[0][i];
        cout << "      " << matrix_b[0][i];
    }
    //---------------------------------------------------------------------------------------------
    determinant_A = calculatedeterminant(matrix_a, 3);
    cout << endl
         << "Determinat of Matrix A is " << determinant_A;
    //---------------------------------------------------------------------------------------------
    cout << endl
         << "Matrix Ax" << endl;
    int matrix_Ax[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            matrix_Ax[i][j] = (j == 0) ? matrix_b[0][i] : matrix_a[i][j];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
            cout << matrix_Ax[i][j] << " ";
    }
    //---------------------------------------------------------------------------------------------
    determinant_Ax = calculatedeterminant(matrix_Ax, 3);
    cout << endl
         << "Determinat of Matrix Ax is " << determinant_Ax;
    //---------------------------------------------------------------------------------------------
    cout << endl
         << "Matrix Ay" << endl;
    int matrix_Ay[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            matrix_Ay[i][j] = (j == 1) ? matrix_b[0][i] : matrix_a[i][j];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
            cout << matrix_Ay[i][j] << " ";
    }
    //---------------------------------------------------------------------------------------------
    determinant_Ay = calculatedeterminant(matrix_Ay, 3);
    cout << endl
         << "Determinat of Matrix Ay is " << determinant_Ay;
    //---------------------------------------------------------------------------------------------
    cout << endl
         << "Matrix Az" << endl;
    int matrix_Az[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            matrix_Az[i][j] = (j == 2) ? matrix_b[0][i] : matrix_a[i][j];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
            cout << matrix_Az[i][j] << " ";
    }
    //---------------------------------------------------------------------------------------------
    determinant_Az = calculatedeterminant(matrix_Az, 3);
    cout << endl
         << "Determinat of Matrix Az is " << determinant_Az;
    //---------------------------------------------------------------------------------------------
    if (determinant_A == 0)
    {
        cout << endl
             << "Detertminant of matrix A is zero (0) so answer is not possible :( " << endl;
    }
    else
    {
        x = determinant_Ax / determinant_A;
        y = determinant_Ay / determinant_A;
        z = determinant_Az / determinant_A;
        cout << "Result :: " << endl;
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
        cout << "Z = " << z << endl;
    }
    //------------------------------------	-------------------------------------------------------
}
int main()
{
    system("clear");

    int matrix_a[3][3];
    int matrix_b[1][3];
    char matrix_x[1][3] = {'x', 'y', 'z'};

    //---------------------------------------------------------------------------------------------
    cout << "Enter the equations" << endl;
    cout << "a11*x1 + a12*y1 + a13*z1 = b1" << endl;
    cin >> matrix_a[0][0] >> matrix_a[0][1] >> matrix_a[0][2] >> matrix_b[0][0];
    cout << "a21*x2 + a22*y2 + a23*z2 = b2" << endl;
    cin >> matrix_a[1][0] >> matrix_a[1][1] >> matrix_a[1][2] >> matrix_b[0][1];
    cout << "a31*x3 + a32*y3 + a33*z3 = b3" << endl;
    cin >> matrix_a[2][0] >> matrix_a[2][1] >> matrix_a[2][2] >> matrix_b[0][2];
    //---------------------------------------------------------------------------------------------

    solve(matrix_a, matrix_b, matrix_x);

    cout << endl;
    return 0;
}