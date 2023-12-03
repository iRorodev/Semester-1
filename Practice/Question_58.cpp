// Muhammad Rohail 22i8776 BS(SE)-A Question 2
// working like a charm without file handling :)
#include <iostream>
#include <time.h>

using namespace std;
int main()
{
    int match;
    system("clear");
    srand(time(0));
    cout << "----------------------------------------------" << endl;
    cout << "Following teams are playing in this tournament" << endl;
    cout << "1) Afghanistan\n2) Australia\n3) Bangladesh\n4) England\n5) India\n6) Ireland" << endl;
    cout << "7) Pakistan\n8) Scotland\n9) South Africa\n10)Sri Lanka\n11)West Indies\n12)Zimbabwe" << endl;
    cout << "----------------------------------------------" << endl;

    string team1 = "Afghanistan";
    string team2 = "Australia";
    string team3 = "Bangladesh";
    string team4 = "England";
    string team5 = "India";
    string team6 = "Ireland";
    string team7 = "Pakistan";
    string team8 = "Scotland";
    string team9 = "South Africa";
    string team10 = "Sri Lanka";
    string team11 = "West Indies";
    string team12 = "Zimbabwe";

    cout << "Knockout Match 1: " << team1 << " vs " << team2 << endl;
    match = rand() % 2;
    if (match == 1)
    {
        cout << team1 << " WON " << endl;
        team1 = team1;
    }
    else
    {
        cout << team2 << " WON " << endl;
        team1 = team2;
    }

    cout << "Knockout Match 2: " << team3 << " vs " << team4 << endl;
    match = rand() % 2;
    if (match == 1)
    {
        cout << team3 << " WON " << endl;
        team2 = team3;
    }
    else
    {
        cout << team4 << " WON " << endl;
        team2 = team4;
    }

    cout << "Knockout Match 3: " << team5 << " vs " << team6 << endl;
    match = rand() % 2;
    if (match == 1)
    {
        cout << team5 << " WON " << endl;
        team3 = team5;
    }
    else
    {
        cout << team6 << " WON " << endl;
        team3 = team6;
    }

    cout << "Knockout Match 4: " << team7 << " vs " << team8 << endl;
    match = rand() % 2;
    if (match == 1)
    {
        cout << team7 << " WON " << endl;
        team4 = team7;
    }
    else
    {
        cout << team8 << " WON " << endl;
        team4 = team8;
    }

    cout << "Knockout Match 5: " << team9 << " vs " << team10 << endl;
    match = rand() % 2;
    if (match == 1)
    {
        cout << team9 << " WON " << endl;
        team5 = team9;
    }
    else
    {
        cout << team10 << " WON " << endl;
        team5 = team10;
    }

    cout << "Knockout Match 6: " << team11 << " vs " << team12 << endl;
    match = rand() % 2;
    if (match == 1)
    {
        cout << team11 << " WON " << endl;
        team6 = team11;
    }
    else
    {
        cout << team8 << " WON " << endl;
        team6 = team12;
    }
    cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Knockout Match 7: " << team1 << " vs " << team2 << endl;
    match = rand() % 2;
    if (match == 1)
    {
        cout << team1 << " WON " << endl;
        team1 = team1;
    }
    else
    {
        cout << team2 << " WON " << endl;
        team1 = team2;
    }

    cout << "Knockout Match 8: " << team3 << " vs " << team4 << endl;
    match = rand() % 2;
    if (match == 1)
    {
        cout << team3 << " WON " << endl;
        team2 = team3;
    }
    else
    {
        cout << team4 << " WON " << endl;
        team2 = team4;
    }

    cout << "Knockout Match 9: " << team5 << " vs " << team6 << endl;
    match = rand() % 2;
    if (match == 1)
    {
        cout << team5 << " WON " << endl;
        team3 = team5;
    }
    else
    {
        cout << team6 << " WON " << endl;
        team3 = team6;
    }
    cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "The three qualifying teams are " << endl;
    cout << "1) " << team1 << endl;
    cout << "2) " << team2 << endl;
    cout << "3) " << team3 << endl;

    int point1 = 0, point2 = 0, point3 = 0;

    cout << "Match 10: " << team1 << " vs " << team2 << endl;
    match = rand() % 2;
    if (match == 1)
    {
        cout << team1 << " WON " << endl;
        point1++;
    }
    else
    {
        cout << team2 << " WON " << endl;
        point2++;
    }

    cout << "Match 11: " << team2 << " vs " << team3 << endl;
    match = rand() % 2;
    if (match == 1)
    {
        cout << team2 << " WON " << endl;
        point2++;
    }
    else
    {
        cout << team3 << " WON " << endl;
        point3++;
    }

    cout << "Match 12: " << team3 << " vs " << team1 << endl;
    match = rand() % 2;
    if (match == 1)
    {
        cout << team1 << " WON " << endl;
        point1++;
    }
    else
    {
        cout << team3 << " WON " << endl;
        point3++;
    }
    cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "team      points" << endl;
    cout << team1 << "   " << point1 << endl;
    cout << team2 << "   " << point2 << endl;
    cout << team3 << "   " << point3 << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;
    if (point1 == 1 && point2 == 1 && point3 == 1)
    {
        int random = rand() % 3;
        if (random == 0)
        {
            cout << "Match 13: " << team2 << " vs " << team3 << endl;
            match = rand() % 2;
            if (match == 1)
            {
                cout << team2 << " WON " << endl;
                team2 = team2;
            }
            else
            {
                cout << team3 << " WON " << endl;
                team2 = team3;
            }
            team1 = team1;
        }
        if (random == 1)
        {
            cout << "Match 13: " << team1 << " vs " << team3 << endl;
            match = rand() % 2;
            if (match == 1)
            {
                cout << team1 << " WON " << endl;
                team2 = team1;
            }
            else
            {
                cout << team3 << " WON " << endl;
                team2 = team3;
            }
            team1 = team2;
        }
        if (random == 3)
        {
            cout << "Match 13: " << team2 << " vs " << team1 << endl;
            match = rand() % 2;
            if (match == 1)
            {
                cout << team2 << " WON " << endl;
                team2 = team2;
            }
            else
            {
                cout << team1 << " WON " << endl;
                team2 = team1;
            }
            team1 = team3;
        }
        cout << "Match 14: " << team1 << " vs " << team2 << endl;
        match = rand() % 2;
        if (match == 1)
        {
            cout << team1 << " WON " << endl;
            team1 = team1;
        }
        else
        {
            cout << team2 << " WON " << endl;
            team1 = team2;
        }
    }
    else
    {
        if (point1 == 0)
        {
            team1 = team2;
            team2 = team3;
        }
        if (point2 == 0)
        {
            team1 = team1;
            team2 = team3;
        }
        if (point3 == 0)
        {
            team1 = team1;
            team2 = team2;
        }
        cout << "Final Match 13: " << team2 << " vs " << team1 << endl;
        match = rand() % 2;
        if (match == 1)
        {
            cout << team2 << " WON " << endl;
            team1 = team2;
        }
        else
        {
            cout << team1 << " WON " << endl;
            team1 = team1;
        }
    }

    cout << "*****************************************************" << endl;
    cout << "Congratulations :) " << team1 << " has won the tournament" << endl;
    cout << "*****************************************************" << endl;
    cout << endl;
    return 0;
}