// Muhammad Rohail 22i8776 SE-A

#include <iostream>
using namespace std;

int validate(int range)
{
    if (range <= 0)
    {
        cout << "invalid Range! Please enter range again :: ";
        cin >> range;
        validate(range);
    }
    return range;
}

int main()
{
    int range;
    int total = 0;
    cout << "Enter the range for all sides: ";
    cin >> range;

    range = validate(range);

    cout << "Side A       Side B       Hyp" << endl;
    cout << "-----------------------------------" << endl;

    for (int hyp = 1; hyp <= range; hyp++)
    {
        for (int i = 1; i <= range; i++)
        {
            for (int j = 1; j <= range; j++)
            {
                if (i * i + j * j == hyp * hyp)
                {
                    total++;
                    cout << i << "            " << j << "            " << hyp << endl;
                }
            }
        }
    }
    cout << "-----------------------------------" << endl;
    cout << "A total of " << total << " Pythagorus triplets were found in range " << range;
    return 0;
}