#include <iostream>

using namespace std;

struct CalculatorInput
{
    double num;
    double num1;
    double num2;
    double result;
    char op;
    double base;
    int exponent;
    double angle;
    double value;
};

// Function declarations
void displayMenu();
void simpleCalculator(CalculatorInput &input);
void scientificCalculator(CalculatorInput &input);
double squareRoot(double num);
double power(double base, int exponent);
double sine(double angle);
double cosine(double angle);
double tangent(double angle);
double cosecant(double angle);
double secant(double angle);
double cotangent(double angle);
double inverseSine(double value);
double inverseCosine(double value);
double inverseTangent(double value);
int factorial(int num);
double naturalLogarithm(double num);
double exponentialFunction(double num);
double square(double num);
double cube(double num);
double cubeRoot(double num);
double convertToDegrees(double radians);
double convertToRadians(double degrees);
double inverse(double num);
double absoluteValue(double num);

int main()
{
    cout << "---- Welcome to the ITP (Introduction To Programming) Project by LAIQA QAMAR ----\n";

    int choice;
    CalculatorInput input;

    do
    {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            simpleCalculator(input);
            break;
        case 2:
            scientificCalculator(input);
            break;
        case 3:
            cout << "Exiting the program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
        cout << "\n";
    } while (choice != 3);

    return 0;
}

void displayMenu()
{
    cout << "1. Simple Calculator\n";
    cout << "2. Scientific Calculator\n";
    cout << "3. Exit\n";
    cout << "Enter the choice (1-3): ";
}

void simpleCalculator(CalculatorInput &input)
{
    double result;
    char op;

    cout << "Enter the first number: ";
    cin >> input.num1;
    cout << "Enter the second number: ";
    cin >> input.num2;
    cout << "Enter the operator (+, -, *, /) to perform the operation: ";
    cin >> op;
    switch (op)
    {
    case '+':
        result = input.num1 + input.num2;
        cout << "Result is " << result << "\n";
        break;
    case '-':
        result = input.num1 - input.num2;
        cout << "Result is " << result << "\n";
        break;
    case '*':
        result = input.num1 * input.num2;
        cout << "Result is " << result << "\n";
        break;
    case '/':
        if (input.num2 != 0)
        {
            result = input.num1 / input.num2;
            cout << "Result is " << result << "\n";
        }
        else
        {
            cout << "Error: Division by zero is not allowed.\n";
        }
        break;
    default:
        cout << "Invalid operator.\n";
        break;
    }
}

void scientificCalculator(CalculatorInput &input)
{
    double result;
    int choice;

    cout << "---- Scientific Calculations ----\n";
    cout << "1. Square Root\n2. Power\n3. Sine\n4. Cosine\n5. Tangent\n";
    cout << "6. Cosecant\n7. Secant\n8. Cotangent\n9. Inverse of Sine\n10. Inverse of Cosine\n";
    cout << "11. Inverse of Tangent\n12. Factorial\n13. Natural Logarithm\n14. Exponential Function\n";
    cout << "15. Square\n16. Cube\n17. Cube Root\n18. Convert Angle to Degree\n";
    cout << "19. Convert Degree to Radians\n20. Inverse of a Number\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter a number: ";
        cin >> input.num;
        result = squareRoot(input.num);
        cout << "Square root: " << result << endl;
        break;
    case 2:
        cout << "Enter the base: ";
        cin >> input.base;
        cout << "Enter the exponent: ";
        cin >> input.exponent;
        result = power(input.base, input.exponent);
        cout << "Power: " << result << endl;
        break;
    case 3:
        cout << "Enter an angle: ";
        cin >> input.angle;
        result = sine(input.angle);
        cout << "Result: " << result << endl;
        break;
    case 4:
        cout << "Enter an angle: ";
        cin >> input.angle;
        result = cosine(input.angle);
        cout << "Result: " << result << endl;
        break;
    case 5:
        cout << "Enter an angle: ";
        cin >> input.angle;
        result = tangent(input.angle);
        cout << "Result: " << result << endl;
        break;
    case 6:
        cout << "Enter an angle: ";
        cin >> input.angle;
        result = cosecant(input.angle);
        cout << "Result: " << result << endl;
        break;
    case 7:
        cout << "Enter an angle: ";
        cin >> input.angle;
        result = secant(input.angle);
        cout << "Result: " << result << endl;
        break;
    case 8:
        cout << "Enter an angle: ";
        cin >> input.angle;
        result = cotangent(input.angle);
        cout << "Result: " << result << endl;
        break;
    case 9:
        cout << "Enter a value: ";
        cin >> input.value;
        result = inverseSine(input.value);
        cout << "Result: " << result << endl;
        break;
    case 10:
        cout << "Enter a value: ";
        cin >> input.value;
        result = inverseCosine(input.value);
        cout << "Result: " << result << endl;
        break;
    case 11:
        cout << "Enter a value: ";
        cin >> input.value;
        result = inverseTangent(input.value);
        cout << "Result: " << result << endl;
        break;
    case 12:
        cout << "Enter a number: ";
        cin >> input.num;
        if (input.num < 0)
        {
            cout << "Factorial is not defined for negative numbers.\n";
        }
        else
        {
            result = factorial(static_cast<int>(input.num));
            cout << "Factorial of " << input.num << " is " << result << endl;
        }
        break;
    case 13:
        cout << "Enter a number: ";
        cin >> input.num;
        if (input.num <= 0)
        {
            cout << "Natural logarithm is only defined for positive numbers.\n";
        }
        else
        {
            result = naturalLogarithm(input.num);
            cout << "Result: " << result << endl;
        }
        break;
    case 14:
        cout << "Enter a number: ";
        cin >> input.num;
        result = exponentialFunction(input.num);
        cout << "Result: " << result << endl;
        break;
    case 15:
        cout << "Enter a number: ";
        cin >> input.num;
        result = square(input.num);
        cout << "Result: " << result << endl;
        break;
    case 16:
        cout << "Enter a number: ";
        cin >> input.num;
        result = cube(input.num);
        cout << "Result: " << result << endl;
        break;
    case 17:
        cout << "Enter a number: ";
        cin >> input.num;
        result = cubeRoot(input.num);
        cout << "Result: " << result << endl;
        break;
    case 18:
        cout << "Enter an angle in radians: ";
        cin >> input.angle;
        result = convertToDegrees(input.angle);
        cout << "Result: " << result << endl;
        break;
    case 19:
        cout << "Enter an angle in degrees: ";
        cin >> input.angle;
        result = convertToRadians(input.angle);
        cout << "Result: " << result << endl;
        break;
    case 20:
        cout << "Enter a number: ";
        cin >> input.num;
        result = inverse(input.num);
        cout << "Result: " << result << endl;
        break;
    default:
        cout << "Invalid choice. Please try again." << endl;
        break;
    }
}

double absoluteValue(double num)
{
    if (num < 0)
        return -num;
    else
        return num;
}

// Implement the remaining functions (squareRoot, power, sine, cosine, etc.) as before

double power(double base, int exponent)
{
    double result = 1.0;

    if (exponent < 0)
    {
        base = 1.0 / base;
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}
double squareRoot(double num)
{
    double guess = num / 2.0;
    double prevGuess;

    while (true)
    {
        prevGuess = guess;
        guess = (guess + (num / guess)) / 2.0;

        if (absoluteValue(prevGuess - guess) < 0.000001)
        {
            break;
        }
    }

    return guess;
}
double sine(double angle)
{
    const double PI = 3.14159265;
    angle = angle * PI / 180;

    double result = angle;
    double term = angle;
    int sign = -1;

    for (int i = 3; i <= 19; i += 2)
    {
        term = (term * angle * angle) / (i * (i - 1));
        result += sign * term;
        sign *= -1;
    }

    return result;
}

double cosine(double angle)
{
    const double PI = 3.14159265;
    angle = angle * PI / 180;

    double result = 1;
    double term = 1;
    int sign = -1;

    for (int i = 2; i <= 18; i += 2)
    {
        term = (term * angle * angle) / (i * (i - 1));
        result += sign * term;
        sign *= -1;
    }

    return result;
}

double tangent(double angle)
{
    return sine(angle) / cosine(angle);
}

double cosecant(double angle)
{
    return 1 / sine(angle);
}

double secant(double angle)
{
    return 1 / cosine(angle);
}

double cotangent(double angle)
{
    return 1 / tangent(angle);
}

double asin(double value)
{
    double result = value;
    double term = value;
    double epsilon = 1e-10;
    int n = 1;

    while (term > epsilon)
    {
        term *= (value * value * (2 * n - 1) * (2 * n - 1)) / ((2 * n) * (2 * n + 1));
        result += term;
        n++;
    }

    return result;
}

double inverseSine(double value)
{
    const double PI = 3.14159265;
    double angle = asin(value) * 180 / PI;

    return angle;
}

double acos(double value)
{
    double result = 3.1415 / 2; // Initial approximation for value between -1 and 1
    double term = value;
    double epsilon = 1e-10;
    int n = 1;

    while (term > epsilon)
    {
        term *= (value * value * (2 * n - 1) * (2 * n - 1)) / ((2 * n) * (2 * n + 1));
        result -= term;
        n++;
    }

    return result;
}

double inverseCosine(double value)
{
    const double PI = 3.14159265;
    double angle = acos(value) * 180 / PI;

    return angle;
}

double atan(double value)
{
    double result = value;
    double term = value;
    double epsilon = 1e-10;
    int n = 1;

    while (term > epsilon)
    {
        term *= (-value * value * (2 * n - 1)) / ((2 * n + 1));
        result += term;
        n++;
    }

    return result;
}

double inverseTangent(double value)
{
    const double PI = 3.14159265;
    double angle = atan(value) * 180 / PI;

    return angle;
}

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        int result = 1;
        for (int i = 2; i <= num; i++)
        {
            result *= i;
        }
        return result;
    }
}

double naturalLogarithm(double num)
{
    double epsilon = 1e-10;
    double term = (num - 1) / num;
    double result = term;

    for (int i = 2; term > epsilon; i++)
    {
        term *= (num - 1) / num;
        result += term / i;
    }

    return result;
}

double exponentialFunction(double num)
{
    double result = 1;
    double term = 1;

    for (int i = 1; term > 1e-10; i++)
    {
        term *= num / i;
        result += term;
    }

    return result;
}

double square(double num)
{
    return num * num;
}

double cube(double num)
{
    return num * num * num;
}

double cubeRoot(double num)
{
    double result;
    if (num < 0)
    {
        result = -power(-num, 1.0 / 3.0);
    }
    else
    {
        result = power(num, 1.0 / 3.0);
    }
    return result;
}


double convertToDegrees(double radians)
{
    const double PI = 3.14159265;
    return radians * 180 / PI;
}

double convertToRadians(double degrees)
{
    const double PI = 3.14159265;
    return degrees * PI / 180;
}

double inverse(double num)
{
    if (num == 0)
    {
        cout << "Error: Division by zero is not allowed.\n";
        return 0;
    }
    else
    {
        return 1 / num;
    }
}