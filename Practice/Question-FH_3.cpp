#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    ofstream my;
    my.open("file3.txt");
    if (my.is_open())
    {
        ifstream ok("file1.txt");
        while (getline(ok, str))
        {
            my << str;
            my << endl;
        }
        ifstream ko("file2.txt");
        while (getline(ko, str))
        {
            my << str;
            my << endl;
        }
    }
    else
        cout << "Could not open the file" << endl;
    return 0;
}