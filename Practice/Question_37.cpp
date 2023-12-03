// Muhammad Rohail 22i8776 SE-A

#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int Science, History, Sports, Pop_culture;
    char ans;
    int correct = 0;
    int pro;

    srand(time(0));
    for (int i = 1; i <= 4; i++)
    {
        pro = rand() % 100;
        if (pro < 50)
            pro += 50;

        if (i == 1)
            Science = pro;
        if (i == 2)
            History = pro;
        if (i == 3)
            Sports = pro;
        if (i == 4)
            Pop_culture = pro;
    }

    cout << "probability of Science = " << Science << endl;
    cout << "probability of History = " << History << endl;
    cout << "probability of Sports = " << Sports << endl;
    cout << "probability of Pop Culture = " << Pop_culture << endl;

    for (int q = 1; q <= 15; q++)
    {
        int cate = (rand() % 4) + 1;
        if (cate == 1 && Science > 20)
        {
            cout << "Question " << q << " is from Science (y/n) ::  ";
            cin >> ans;
            if (ans == 'y')
            {
                correct++;
                Science = Science - 10;
            }
        }
        if (cate == 2 && History > 20)
        {
            cout << "Question " << q << " is from History (y/n) ::  ";
            cin >> ans;
            if (ans == 'y')
            {
                correct++;
                History = History - 10;
            }
        }
        if (cate == 3 && Sports > 20)
        {
            cout << "Question " << q << " is from Sports (y/n) ::  ";
            cin >> ans;
            if (ans == 'y')
            {
                correct++;
                Sports = Sports - 10;
            }
        }
        if (cate == 4 && Pop_culture > 20)
        {
            cout << "Question " << q << " is from Pop Culture (y/n) ::  ";
            cin >> ans;
            if (ans == 'y')
            {
                correct++;
                Pop_culture = Pop_culture - 10;
            }
        }
    }

    int prize = 0;
    if (correct >= 1 && correct <= 3)
        prize = correct * 100;
    if (correct > 3 && correct <= 6)
        prize = correct * 1000;
    if (correct > 6 && correct <= 10)
        prize = correct * 10000;
    if (correct > 10)
        prize = correct * 15000;

    cout << "----------------------------------------------" << endl;

    cout << "You have answered " << correct << " questions correctly." << endl;
    cout << "You have won $" << prize << endl;
    cout << "Congratulations!" << endl;
    return 0;
}