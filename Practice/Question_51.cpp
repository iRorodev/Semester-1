// Muhammad Rohail 22i8776 SE-A Question 2 String Multiplication
#include <bits/stdc++.h>
using namespace std;
// To find the start of string ( first word )
string Start(string Sentence)
{
    string startofstring = ""; // empty cus it takes garbage value like me :(
    for (int i = 0; i < Sentence.length(); i++)
    {
        startofstring += Sentence[i];
        if (Sentence[i] == ' ') // breaks weherever space is found like me :(
            break;
    }
    return startofstring; // returns first word
}
// To find the end of string ( last word )
string End(string Sentence)
{
    string endofstring = ""; // empty cus it takes garbage value like me :(
    for (int i = Sentence.length() - 1; i >= 0; i--) // loop start from end so last word is stored first
    {
        endofstring = Sentence[i] + endofstring; // sentence is added before endofstring so the strng remians in order otherwise it gives reverse word
        if (Sentence[i] == ' ')                  // breaks weherever space is found like me :(
            break;
    }
    return endofstring; // returns last word
}
// To find the part of string 
// raat ke 2 baje kiya idk how this funtion works but it does :D
int Find(string tofind, string Sentence)
{
    string Founded = "";  // empty cus it takes garbage value like me :(
    int location; // to store the index of first character 
    for (int i = 0; i <= tofind.length(); i++)
    {
        int j = 0;
        while (j < Sentence.length())
        {
            if (Sentence[j] == tofind[i]) // if characters same hain
            {
                location = 1 + j - tofind.length(); // Genius math to find location :D
                Founded += tofind[i]; // add the words founded inside Founded
                i++; // i and j bith increment so both string go to next character 
            }
            j++;
            if (Founded == tofind) // Nahi mil rahi :(
                break;
        }
    }
    if (tofind == Founded) // if same hain to sai hai
    {
        cout << "\"" << Founded << "\""
             << " Has been found :) " << endl;
        return location;
    }
    else // warna nahi mili :(
    {
        cout << "\"" << tofind << "\""
             << " Could not be found in the Sentence :(" << endl;
        return -1;
    }
}
// To reverse the string
string Reverse(string Sentence)
{
    string temp = ""; // Empty so no garbage value 
    for (int i = Sentence.length() - 1; i >= 0; i--) // starts from last so last word is stored first 
        temp += Sentence[i];
    return temp;
}
// to change something inside string. 
string Changing(string replacethis, string withthis, string Sentence)
{
    string tofind = replacethis; // first we find the thing we want to replace in string and see if it exists
    string Founded = ""; // again empty 
    int location; // location too we need it to see where the first character of the word we need to replace is

    for (int i = 0; i <= tofind.length(); i++) // finding the  part works the same as mentioned above
    {
        int j = 0;
        while (j < Sentence.length())
        {
            if (Sentence[j] == tofind[i])
            {
                location = 1 + j - tofind.length();
                Founded += tofind[i];
                i++;
            }
            j++;
            if (Founded == tofind)
                break;
        }
    }
    int j = 0; //  works for string of same lenths
    for (int i = location; i < withthis.length() + location; i++) // senice we found location already above we can start from there
    {
        Sentence[i] = withthis[j];
        j++;
    }
    return Sentence;
}

int validate(string str) // validate so string wont be empty like me
{
    if (str == "")
        return 0;
    else
        return 1;
}

int main()
{
    int choise;
    string Sentence, tofind, reverse, endofsentence, startofsentence, replacethis, withthis;
    cout << " Welcome, We are doing String Manipulations today :) " << endl;
    cout << " Enter a String / Sentence : ";
    getline(cin, Sentence);
    while (true)
    {
        // Delious MENU :)
        cout << " --------------------------------------------------- " << endl;
        cout << " Press                   Action" << endl;
        cout << " 0                   Exits the program " << endl;
        cout << " 1                   Enter a new string " << endl;
        cout << " 2                   To break the string and find its start and end " << endl;
        cout << " 3                   To find part of a string " << endl;
        cout << " 4                   To Replace something in the string " << endl;
        cout << " 5                   To Reverse the string" << endl;
        cout << " --------------------------------------------------- " << endl;
        cin >> choise;
        
        if (choise == 0)
        {
            cout << "** GoodBai **" << endl;
            break;
        }
        if (choise == 1)
        {
            cin.ignore();
            cout << "Enter a String / Sentence : ";
            getline(cin, Sentence);
        }
        if (choise == 2)
        {
            cin.ignore();
            startofsentence = Start(Sentence);
            endofsentence = End(Sentence);
            cout << "Start of string = " << startofsentence << endl;
            cout << "End of string = " << endofsentence << endl;
        }
        if (choise == 3)
        {
            cin.ignore();
            cout << "What do you want to find in the string : ";
            getline(cin, tofind);

            int index = Find(tofind, Sentence); // To find a part of string;
            if (index == -1)
                cout << " SO no InDex." << endl;
            else
                cout << " and is at location " << index << endl;
        }
        if (choise == 4)
        {
            cin.ignore();
            cout << "What do you want to replace in string : \"" << Sentence << "\"" << endl;
            getline(cin, replacethis);
            cout << "with ";
            getline(cin, withthis);
            int check = validate(withthis);

            if (withthis.length() == replacethis.length())
            {
                if (check == 1)
                {
                    Sentence = Changing(replacethis, withthis, Sentence);
                    cout << "New String after replacing is : " << endl;
                    cout << Sentence << endl;
                }
                else
                    cout << "you cannot give empty string :( " << endl;
            }
            else
                cout << " :( :( Number of characters should be same :( idk how to increase string size :( pls halp :(" << endl;
        }
        if (choise == 5)
        {
            cin.ignore();
            reverse = Reverse(Sentence);
            cout << "Reverese string is : " << reverse << endl;
        }
    }
    return 0;
}