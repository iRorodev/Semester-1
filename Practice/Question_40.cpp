// Muhammad Rohail 22i8776 SE-A

#include <iostream>
using namespace std;

int add(int a, int b)
{
    for (int i = 1; i <= b; i++)
        a++;
    return a;
}
int sub(int a, int b)
{
    for (int i = 1; i <= b; i++)
        a--;
    return a;
}
int multiply(int a, int b)
{
    int result = 0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
            result++;
    }
    return result;
}
int divide(int a, int b)
{
    int result = 1;
    for (int i = a; i > 0; i--)
    {
        if (a > 0 && a > b)
        {
            for (int j = 1; j <= b; j++)
                a--;
            result++;
        }
    }
    return result;
}
int mod(int a, int b)
{
    int result = 0;
    if (a < b)
        result = a;
    else
    {
        for (int i = a; i >= b; i--)
        {
            if (a >= b)
            {
                for (int i = b; i > 0; i--)
                    a--;
            }
        }
        result = a;
    }
    return result;
}

int main()
{
    int a, b;
    int greater, smaller;
    char op;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    cout << "Enter the operation ";
    cin >> op;

    switch (op)
    {
    case '+':
    {
        cout << "Result is : " << add(a, b);
        break;
    }
    case '-':
    {
        cout << "Result is : " << sub(a, b);
        break;
    }
    case '*':
    {
        cout << "Result is : " << multiply(a, b);
        break;
    }
    case '/':
    {
        cout << "Result is : " << divide(a, b);
        break;
    }
    case '%':
    {
        cout << "Result is : " << mod(a, b);
        break;
    }
    default:
    {
        cout << "invalid operator" << endl;
        break;
    }
    }
    return 0;
}
