#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    ofstream my;
    my.open("file4.txt");
    if (my.is_open())
    {
        ifstream ok("file2.txt");
        while (getline(ok, str))
        {
            my << endl;
            for (int i = 0; i < str.length(); i++)
                my << char(str[i] + 100);
        }
    }
    else
        cout << "Could not open the file" << endl;
    return 0;
}