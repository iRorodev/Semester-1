#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string str;

    ofstream my;
    my.open("file1.txt");
    if (my.is_open())
    {
        cout << "File 1 has been opened --------------------------------------------------------" << endl;
        my << "Abdullan ibn Mas'ud reported: The Messenger of Allah, peace and blessings be upon him, said,\"Most of the sins of the children of Adam are on their tongues.\"" << endl;
        my << " " << endl;
        my << "Ibn Mas'ud said: \"O tongue! Speak goodness and be rewarded, or remain silent and be safe, lest you become regretful.\"" << endl;
        my << " " << endl;
        my << "Source: al-Mu'jam al-Kabir 10300" << endl;
        my.close();
        ifstream ok("file1.txt");
        while (getline(ok, str))
            cout << str << endl;
    }
    else
        cout << "Could not open the file" << endl;
    return 0;
}