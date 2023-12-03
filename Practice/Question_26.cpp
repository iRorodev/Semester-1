// Muhammad Rohail  22i8776  SE-A

// Network Interface (Nested if/if-else)

#include <iostream>
#include <cstring>
using namespace std;
bool wifi;
string errorMessage, returnMessage, checkfilename, name;
char location;
int check = 0;

void networkStartValidator();
bool isconnected();
float availablebanwidth();
void startapplication();
void stopapplictaion();
void error(string error);
void getfiletype();
void savefile(string name, char location);
bool isfilesaved(string filename);
void sendmessage(string message);
void networkSend(string returnMessage, string filename);

int main()
{
    cout << "\n\n";
    if (check == 0)
        networkStartValidator();
    else
        return 0;
}
void networkStartValidator() // starts here!
{
    cout << "Loading:" << endl;
    cout << "|||||||||||||||||||||||||||||||||" << endl;
    wifi = isconnected();
    float bandwidth = availablebanwidth();

    if (wifi == true && bandwidth >= 20.0)
    {
        startapplication();
    }
    else
    {
        if (wifi == false)
        {
            errorMessage = "Wifi not connected. Ampplication cant start";
            error(errorMessage);
        }
        else
        {
            errorMessage = "Low bandwidth connection. Application cant start";
            error(errorMessage);
        }
    }
}
bool isconnected()
{
    bool wifi;
    char a;
    cout << "Is wifi connected? (y/n) ";
    cin >> a;
    wifi = (a == 'y' || a == 'Y') ? true : false;
    return wifi;
}
float availablebanwidth()
{
    float bandwidth;
    cout << "Enter available bandwidth : ";
    cin >> bandwidth;
    return bandwidth;
}
void error(string error)
{
    cout << endl;
    cout << "ERROR: " << error << endl;
    cout << "IDK what to do pls help, what do i do here " << endl;
    cout << "-Rohail" << endl;
    stopapplictaion();
}
void startapplication()
{
    cout << "--------------------" << endl;
    cout << "Application started!" << endl;
    cout << "--------------------" << endl;
    cout << "Enter file name: ";
    cin >> name;
    getfiletype();
}
void getfiletype()
{
    // This function gets the file type of the message that you received from the
    // network. The file type are T="txt", M ="mp4" and P ="mp3", I= "invalid"
    cout << "Enter location where you want to store the file? (T=txt, M = mp4 and P = mp3, I= invalid) ";
    cin >> location;

    if (availablebanwidth() > 5)
        savefile(name, location);
    else
    {
        errorMessage = "Cannot save file because bandwidth is low";
        error(errorMessage);
    }
}
void savefile(string name, char location)
{
    if (location == 'T')
    {
        cout << "-----------------------" << endl;
        cout << "File stored succesfully" << endl;
        cout << "-----------------------" << endl;
        returnMessage = "is saved in Text files";
        networkSend(returnMessage, name);
    }
    else if (location == 'M')
    {
        cout << "-----------------------" << endl;
        cout << "File stored succesfully" << endl;
        cout << "-----------------------" << endl;
        returnMessage = "is saved in video files";
        networkSend(returnMessage, name);
    }
    else if (location == 'P')
    {
        cout << "-----------------------" << endl;
        cout << "File stored succesfully" << endl;
        cout << "-----------------------" << endl;
        returnMessage = "is saved in music files";
        networkSend(returnMessage, name);
    }
    else
    {
        errorMessage = "Invalid file format";
        error(errorMessage);
    }
}
void networkSend(string returnMessage, string filename)
{
    bool wifi;
    cout << "Enter the file name that you want to see if it is stored in application or not? ";
    cin >> checkfilename;
    if (isfilesaved(checkfilename) == true)
    {
        wifi = isconnected();
        if (wifi = true)
        {
            if (availablebanwidth() > 10)
            {
                cout << filename << " " << returnMessage;
                cout << "\n\nDo you want to stop application? (y/n) ";
                char check;
                cin >> check;
                if (check == 'y') // program ends here!
                    stopapplictaion();
                else
                {
                    cout << "\nNO loops so the program closes\n yeet" << endl;
                    stopapplictaion();
                }
            }
            else
            {
                errorMessage = "low bandwidth, try again later!";
                error(errorMessage);
            }
        }
        else
        {
            errorMessage = "wifi not connected! try again later";
            error(errorMessage);
        }
    }
    else
    {
        errorMessage = "Is this camera on? Oh yea, i have never seen such a file in my life :(";
        error(errorMessage);
    }
}
bool isfilesaved(string f_name)
{
    if ((name.compare(f_name)) == 0)
    {
        return true;
    }
    return false;
}
void stopapplictaion()
{
    cout << "------------------" << endl;
    cout << "Application closed" << endl;
    cout << "------------------" << endl;
    check = 1;
    main();
}