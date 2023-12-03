#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "Enter row and column of the array: ";
    cin >> row >> column;
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
        arr[i] = new int[column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cin >> arr[i][j];
    }
    cout << "----------------------------------------------------------------------" << endl;
    for (int i = 0; i < row; i++)
    {
        int largest = arr[i][0];
        for (int j = 1; j < column; j++)
        {
            if (arr[i][j] > largest)
                largest = arr[i][j];
        }
        cout << "Largest Number in Row " << i + 1 << " = " << largest << endl;
    }
    cout << "----------------------------------------------------------------------" << endl;
    for (int i = 0; i < row; i++)
    {
        int smallest = arr[i][0];
        for (int j = 1; j < column; j++)
        {
            if (arr[i][j] < smallest)
                smallest = arr[i][j];
        }
        cout << "Smallest Number in Row " << i + 1 << " = " << smallest << endl;
    }
    cout << "----------------------------------------------------------------------" << endl;
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        int j = i;
        sum += arr[i][j];
    }
    cout << "Some of \\ is " << sum << endl;
    cout << "----------------------------------------------------------------------" << endl;
    sum = 0;
    for (int i = row - 1; i >= 0; i--)
    {
        int j = i;
        sum += arr[i][j];
    }
    cout << "Some of / is " << sum << endl;
    cout << "----------------------------------------------------------------------" << endl;
    return 0;
}