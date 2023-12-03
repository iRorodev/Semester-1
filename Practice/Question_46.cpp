#include <bits/stdc++.h>
using namespace std;

void MaxFrequency(int num, int &digit, int &maxfrequency);
void storethenumberinarray(int num, int numberofdigits, int *array);
int numberofdigitsinnumber(int num);

int main()
{
    int num, digit, maxfrequency;
    do
    {
        cout << "Enter a number : ";
        cin >> num;
    } while (num <= 0);

    MaxFrequency(num, digit, maxfrequency);
    cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
    cout << "Digit : " << digit << " Frequencey : " << maxfrequency << endl;
    cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
    return 0;
}
void MaxFrequency(int num, int &digit, int &maxfrequency)
{
    maxfrequency = 0;
    int numberofdigits = numberofdigitsinnumber(num);
    int array[numberofdigits];
    storethenumberinarray(num, numberofdigits, array);

    for (int i = 0; i < numberofdigits; i++)
    {
        int tempdigit = array[i];
        int frequency = 0;
        for (int j = 0; j < numberofdigits; j++)
        {
            if (tempdigit == array[j])
                frequency++;
        }
        if (frequency > maxfrequency)
        {
            digit = tempdigit;
            maxfrequency = frequency;
        }
    }
}
int numberofdigitsinnumber(int num)
{
    int temp = num;

    int digits = 1;
    while (true)
    {
        temp /= 10;
        if (temp <= 0)
            break;
        digits++;
    }
    return digits;
}
void storethenumberinarray(int num, int numberofdigits, int *array)
{
    int index = 0;
    while (numberofdigits > 0)
    {
        numberofdigits--;
        int temp = 1;
        for (int i = 1; i <= numberofdigits; i++)
            temp *= 10;
        array[index] = num / temp;
        index++;
        num %= temp;
    }
}