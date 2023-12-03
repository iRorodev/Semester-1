#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    ofstream my;
    int alphabet = 0;
    int word = 1;
    my.open("file2.txt");
    if (my.is_open())
    {
        cout << "File 2 has been opened -------------------------------------------------------------" << endl;
        my << "\"The rose is red.\nA girl is playing there.\"There is a playground.\nAn aeroplane is in the sky.\nNumbers are not allowed in the password.\"" << endl;
        my.close();
        ifstream ok("file2.txt");
        while (getline(ok, str))
        {
            cout << endl;
            for (int i = 0; i < str.length(); i++)
            {
                cout << str[i];
                if (str[i] != ' ' && str[i] != '.')
                    alphabet++;
                if (str[i] == ' ')
                    word++;
            }
        }
        cout << "The number of characters is : " << alphabet << endl;
        cout << "The number of words are : " << word << endl;
    }
    else
        cout << "Could not open the file" << endl;
    return 0;
}