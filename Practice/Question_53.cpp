// Muhammad Rohail 22i8776 SE-A Question 4 Coding Decoding
#include <bits/stdc++.h>
using namespace std;                // nessesary for program
string encode(char alphabet);       // prototype
void decode(string temp);           // prototype
int validatemessage(string message) // validates the string enetered by user to see if has any unnecessay letters
{
    for (int i = 0; i < message.length(); i++) // looop
    {
        if (!((message[i] >= 65 && message[i] <= 91) || message[i] == ' ')) //  A < n < Z  and n == "space_bar"
        {
            cout << "IN CAPITAL LETTERS PLS? run the program again baka :( " << endl; // cus you baka
            return 0;                                                                 // returns 0 in check if something wrong is dectected
        }
    }
    return 1; // return 1 if everything coorect. Goodjob <3
}
int validateencrypted(string message)
{
    for (int i = 0; i < message.length(); i++) // looop
    {
        if (message[i] != 0 && message[i] != 1)
        {
            cout << "IN 0'S AND 1'S BAKA NOW PROGRAM SAD AND IT CLOSES " << endl; // cus you baka
            return 0;                                                             // returns 0 in check if something wrong is dectected
        }
    }
    return 1; // return 1 if everything coorect. Goodjob <3
}
int main() // main function
{
    string message, encrpyted = "", decoded = ""; // initalized so no garbage value
    int temp;                                     // temp to check if user wants to enter his own string to decode or not
    cout << "what is the message that you want to encrypt in capital letters? " << endl;
    getline(cin, message);

    int check = validatemessage(message); // validates the message
    if (check == 1)                       // you have entered the correct string
    {
        for (int i = 0; i < message.length(); i++) // loop
        {
            encrpyted = encrpyted + encode(message[i]); // encrypts character by character
        }
        cout << " Encrpyted string : " << encrpyted << endl;                 // High tech user interface :)
        cout << " Press 0 else if you want to decode this string? " << endl; // High tech user interface :)
        cout << " Press 1 else if you want to decode another string ";       // High tech user interface :)
        cin >> temp;
        if (temp == 0)
        {
            string temporary = ""; // initalized so no garbage value
            int i = 0;             // first char = 0
            while (i < encrpyted.length())
            {
                temporary = temporary + encrpyted[i]; // string addition
                i = i + 1;                            // increment
                if (i % 5 == 0)                       // checks of divisible by 5
                {
                    decode(temporary); // decodes 5 numbers into 1 character;
                    temporary = "";    // goes back to null to store 5 more characters
                }
            }
        }
        else if (temp == 1)
        {
            cin.ignore();                                     // needed to ignore cin idk why but neeeded no remove pls :(
            string temporary = "";                            // initalized so no garbage value
            cout << "Enter a new string in the form 0 & 1 :"; // 0 and 1 yeah binary
            getline(cin, encrpyted);
            int check = validateencrypted(encrpyted);
            if (check == 1)
            {
                int i = 0; // first char = 0;
                while (i < encrpyted.length())
                {
                    temporary = temporary + encrpyted[i]; // string addition
                    i = i + 1;                            // increment
                    if (i % 5 == 0)                       // checks of divisible by 5
                    {
                        decode(temporary); // decodes 5 numbers into 1 character;
                        temporary = "";    // goes back to null to store 5 more characters
                    }
                }
            }
        }
    }
    return 0; // prgram exits here
}
void decode(string numbers)
{
    string temp = numbers;
    if (temp == "00000")
        cout << " ";
    else if (temp == "00001")
        cout << "A";
    else if (temp == "00010")
        cout << "B";
    else if (temp == "00011")
        cout << "C";
    else if (temp == "00100")
        cout << "D";
    else if (temp == "00101")
        cout << "E";
    else if (temp == "00110")
        cout << "F";
    else if (temp == "00111")
        cout << "G";
    else if (temp == "01000")
        cout << "H";
    else if (temp == "01001")
        cout << "I";
    else if (temp == "01010")
        cout << "J";
    else if (temp == "01011")
        cout << "K";
    else if (temp == "01100")
        cout << "L";
    else if (temp == "01101")
        cout << "M";
    else if (temp == "01110")
        cout << "N";
    else if (temp == "01111")
        cout << "O";
    else if (temp == "10000")
        cout << "P";
    else if (temp == "10001")
        cout << "Q";
    else if (temp == "10010")
        cout << "R";
    else if (temp == "10011")
        cout << "S";
    else if (temp == "10100")
        cout << "T";
    else if (temp == "10101")
        cout << "U";
    else if (temp == "10110")
        cout << "V";
    else if (temp == "10111")
        cout << "W";
    else if (temp == "11000")
        cout << "X";
    else if (temp == "11001")
        cout << "Y";
    else if (temp == "10010")
        cout << "Z";
    else
        cout << "lol";
}
string encode(char alphabet)
{
    if (alphabet == ' ')
        return "00000";
    else if (alphabet == 'A')
        return "00001";
    else if (alphabet == 'B')
        return "00010";
    else if (alphabet == 'C')
        return "00011";
    else if (alphabet == 'D')
        return "00100";
    else if (alphabet == 'E')
        return "00101";
    else if (alphabet == 'F')
        return "00110";
    else if (alphabet == 'G')
        return "00111";
    else if (alphabet == 'H')
        return "01000";
    else if (alphabet == 'I')
        return "01001";
    else if (alphabet == 'J')
        return "01010";
    else if (alphabet == 'K')
        return "01011";
    else if (alphabet == 'L')
        return "01100";
    else if (alphabet == 'M')
        return "01101";
    else if (alphabet == 'N')
        return "01110";
    else if (alphabet == 'O')
        return "01111";
    else if (alphabet == 'P')
        return "10000";
    else if (alphabet == 'Q')
        return "10001";
    else if (alphabet == 'R')
        return "10010";
    else if (alphabet == 'S')
        return "10011";
    else if (alphabet == 'T')
        return "10100";
    else if (alphabet == 'U')
        return "10101";
    else if (alphabet == 'V')
        return "10110";
    else if (alphabet == 'W')
        return "10111";
    else if (alphabet == 'X')
        return "11000";
    else if (alphabet == 'Y')
        return "11001";
    else if (alphabet == 'Z')
        return "10010";
    else
        return "     ";
}