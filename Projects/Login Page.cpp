#include <bits/stdc++.h>

using namespace std;

struct User
{
    string username;
    string password;
};

void saveUsers(const string &filename, const vector<User> &users)
{
    ofstream file(filename);
    for (const auto &user : users)
        file << user.username << ':' << user.password << '\n';
    file.close();
}
vector<User> loadUsers(const string &filename = "users.txt")
{
    vector<User> users; // Vector to store all users cause then we wont have to make an array of "defined" size
    ifstream file(filename);
    string line;
    while (getline(file, line)) // Read the file line by line.
    {
        int pos = line.find(':');
        // If we found a ':'
        if (pos != string::npos)
        {
            string username = line.substr(0, pos);
            string password = line.substr(pos + 1);
            users.push_back(User{username, password});
        }
    }
    file.close();
    return users;
}

void displayusers()
{
    vector<User> users = loadUsers();
    for (const auto &user : users)
        cout << "Username: " << user.username << "\tPassword: " << user.password << endl;
    system("pause");
}
void addaccount()
{
    vector<User> users = loadUsers();
    string username;
    string password;

    cout << "Enter username: ";
    cin >> username;
    // Check if the entered username already exists in the vector.
    for (const auto &user : users)
    {
        if (user.username == username)
        {
            cout << "Username already exists. Please choose another one.\n";
            system("pause");
            return;
        }
    }
    cout << "Enter password: ";
    cin >> password;

    users.push_back(User{username, password});
    saveUsers("users.txt", users);
    cout << "Account created successfully.\n";
    system("pause");
}
void editaccount()
{
    vector<User> users = loadUsers();
    string username;

    cout << "Enter the username to edit: ";
    cin >> username;
    bool found = false;
    for (auto &user : users)
    {
        if (user.username == username)
        {
            string newUsername, newPassword;
            cout << "Enter new username: ";
            cin >> newUsername;
            cout << "Enter new password: ";
            cin >> newPassword;
            user.username = newUsername;
            user.password = newPassword;
            found = true;
            break;
        }
    }
    if (found)
    {
        saveUsers("users.txt", users);
        cout << "Account updated successfully.\n";
    }
    else
        cout << "Account not found.\n";
    system("pause");
}
void deleteaccount()
{
    vector<User> users = loadUsers();
    string username;

    cout << "Enter the username to delete: ";
    cin >> username;
    bool found = false;
    for (auto it = users.begin(); it != users.end(); ++it)
    {
        if (it->username == username)
        {
            users.erase(it);
            found = true;
            break;
        }
    }
    if (found)
    {
        saveUsers("users.txt", users);
        cout << "Account deleted successfully.\n";
    }
    else
        cout << "Account not found.\n";
    system("pause");
}
void adminmenu()
{
    int choice;
    while (true)
    {
        system("cls");
        cout << "You have Successfully logged in as Administrator" << endl;
        cout << "Press 0 to log out" << endl;
        cout << "Press 1 to view all accounts" << endl;
        cout << "Press 2 to add a new account" << endl;
        cout << "Press 3 to edit an account" << endl;
        cout << "Press 4 to delete an account" << endl;
        cout << "Enter: ";
        cin >> choice;

        if (choice == 0)
            return;
        else if (choice == 1)
            displayusers();
        else if (choice == 2)
            addaccount();
        else if (choice == 3)
            editaccount();
        else if (choice == 4)
            deleteaccount();
        else
        {
            cout << "Invalid choice. Please try again." << endl;
            system("pause");
        }
    }
}

void noticeBoard()
{
    system("cls");
    cout << "-----------------------------------------------------------------------\n";
    cout << "This is the notice board. All important notices will be displayed here.\n";
    cout << "-----------------------------------------------------------------------\n";
    cout << "On Campus Classes from Monday 05-06-23" << endl;
    cout << "Classes Online Notice" << endl;
    cout << "Saturday Classes Notice" << endl;
    cout << "Notice for Unattended Belongings" << endl;
    cout << "-----------------------------------------------------------------------\n";
    system("pause");
}
void gradecard()
{
    system("cls");
    cout << "-----------------------------------------------------------------------\n";
    cout << "Grade Card for Spring 2023 \n";
    cout << "-----------------------------------------------------------------------\n";
    cout << "Empty like my soul </3 \n";
    cout << "-----------------------------------------------------------------------\n";
    system("pause");
}
void absentees()
{
    system("cls");
    cout << "-----------------------------------------------------------------------\n";
    cout << "This is the Absentees list\n";
    cout << "-----------------------------------------------------------------------\n";
    cout << "No current Absentees " << endl;
    cout << "-----------------------------------------------------------------------\n";
    system("pause");
}
void mycourses()
{
    system("cls");
    cout << "-----------------------------------------------------------------------\n";
    cout << "These are the available courses.\n";
    cout << "-----------------------------------------------------------------------\n";
    cout << "Be patient, we are updating the courses we offer\n";
    cout << "-----------------------------------------------------------------------\n";
    system("pause");
}
void datesheet()
{
    system("cls");
    cout << "-----------------------------------------------------------------------\n";
    cout << "This is the datesheet for upcoming FINAL EXAMS 2023.\n";
    cout << "-----------------------------------------------------------------------\n";
    cout << "Intro to Programing (1):     June 19, 2023\n";
    cout << "Pak Study (1):               June 21, 2023\n";
    cout << "English (1):                 June 23, 2023\n";
    cout << "Calculus (1):                June 27, 2023\n";
    cout << "Applied Physics (1):         July 05, 2023\n";
    cout << "-----------------------------------------------------------------------\n";
    system("pause");
}
void studentmenu()
{
    int choice;
    do
    {
        system("cls");
        cout << "Welcome Student\n0 Logout\n1 Notice Board\n2 GradeCard\n3 Absentees\n4 My Courses\n5 Datesheet\nEnter: ";
        cin >> choice;

        if (choice == 0)
            break;
        else if (choice == 1)
            noticeBoard();
        else if (choice == 2)
            gradecard();
        else if (choice == 3)
            absentees();
        else if (choice == 4)
            mycourses();
        else if (choice == 5)
            datesheet();

    } while (choice != 0);
}

void viewstudentsdata()
{
    cout << "Students Data:\n";
    vector<User> users = loadUsers();
    for (const auto &user : users)
    {
        if (!(user.username.substr(0, 7) == "Teacher" || user.username.substr(0, 7) == "teacher" || user.username == "administrator"))
            cout << "Username: " << user.username << "\tPassword: " << user.password << endl;
    }
    system("pause");
}
void teachermenu()
{
    int choice;
    do
    {
        system("cls");
        cout << "Welcome Teacher\n0 Logout\n1 View Students Data\n2 Enter Marks\n3 Mark Attendence\n4 view everything? nothing? idkwhatteacherhasaccesstoigeverything??\nEnter: ";
        cin >> choice;

        if (choice == 0)
            break;
        else if (choice == 1)
            viewstudentsdata();
        else if (choice == 2)
            // entermarks();
            system("pause");
        else if (choice == 3)
            // markattendence();
            system("pause");
        else if (choice == 4)
            // idkwhattodoanyymore();
            system("pause");
        else
        {
            cout << "invalid choice" << endl;
            system("pause");
        }
    } while (choice != 0);
}

void login()
{
    vector<User> users = loadUsers();
    string username;
    string password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Check if the entered credentials match any user in the vector.
    for (const auto &user : users)
    {
        if (user.username == username && user.password == password)
        {
            if (user.username == "administrator" && user.password == "administrator")
                adminmenu();
            else if (user.username.substr(0, 7) == "Teacher" || user.username.substr(0, 7) == "teacher")
                teachermenu();
            else
                studentmenu();
            return;
        }
    }
    cout << "Invalid Credentials" << endl;
    system("pause");
}

int main()
{
    int choice;
    while (true)
    {
        system("cls");
        login();
    }
    return 0;
}