#include <iostream>
#include <string>
using namespace std;
struct Questions_asked
{
    string Questions_given;
    string answers[5];
};
void PersonalityQuestions()
{
    Questions_asked questions[17] = {
        {"What is your favorite sport?", {"Football", "Basketball", "Cricket", "Baseball", "Boxing"}},
        {"Do you read books?", {"Yes", "No"}},
        {"What is your hobby?", {"Reading books", "Gardening"}},
        {"What is your favorite subject?", {"Maths", "Science"}},
        {"What is your favorite profession?", {"Doctor", "Engineer"}},
        {"Do you like to go on trips?", {"Yes", "No"}},
        {"Do you love doing painting?", {"Yes", "No"}},
        {"What do you do in free time?", {"Play", "My hobby"}},
        {"How many hours do you study?", {"Six", "Five"}},
        {"Do you help your siblings in study?", {"Yes", "No"}},
        {"Do you prefer learning new things?", {"Yes", "No"}},
        {"Do you like working in a team?", {"Yes", "No"}},
        {"Do you participate in extra activities?", {"Yes", "No"}},
        {"Which outdoor game you like to play the most?", {"Cricket", "BaseBall", "Basketball", "Football"}},
        {"Do you respect your teachers?", {"Yes", "No"}},
        {"Do you help your friends and class mates?", {"Yes", "No"}},
        {"Do you have some leadership abilities?", {"Yes", "No"}}};
    int scores = 0;
    for (int i = 0; i < 17; i++)
    {
        cout << "Question " << (i + 1) << ": " << questions[i].Questions_given << endl;
        string answer;
        cout << "Enter your answer: "; // removed endl
        cin >> answer;
        if (answer == questions[i].answers[0])
            scores += 10;
        else if (answer == questions[i].answers[1])
            scores += 5;
        else if (answer == questions[i].answers[2])
            scores += 4;
        else if (answer == questions[i].answers[3])
            scores += 3;
        else if (answer == questions[i].answers[4])
            scores += 2;
        else
            scores += 1;
    }
    cout << "The total score of the personality test :" << scores << endl;
    if (scores >= 100)
        cout << "You are an OUTSTANDING student" << endl;
    else if (scores >= 85)
        cout << "You are an EXCELLENT student" << endl;
    else if (scores >= 70)
        cout << "You are GOOD student" << endl;
    else
        cout << "You are an AVERAGE student" << endl;
}
void SurveyQuestions()
{
    Questions_asked questions[15] = {
        {"Our economy is getting worse day by day?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"Our cricket team is really good?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"Our country is suffering from many issues?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"We are facing water problems?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"Our army is not trained well?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"We are facing many health problems?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"The flood was due to mismanagement?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"We have low fees for educational institutions?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"The youth is skilled?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"The skilled youth is not given enough opportunities?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"We are facing weather problems due to pollution?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"Every student is provided with opportunities?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"Are children taught basic education at homes?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"We are not treating elders respectfully?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}},
        {"We are not suffering from any health problems?", {"Agree", "Disagree", "Neutral", "Strongly Agree", "Strongly Disagree"}}};
    int score[15] = {0};
    for (int i = 0; i < 15; i++)
    {
        cout << "QUESTIONS " << i + 1 << ":" << questions[i].Questions_given << endl;
        for (int j = 0; j < 5; j++)
            cout << j + 1 << ":" << questions[i].answers[j] << endl;
        int answer;
        cout << "Enter your answer (1-5):";
        cin >> answer;
        if (answer >= 1 && answer <= 5)
            score[i] = answer;
        else
        {
            cout << "INVALID ANSWER " << endl;
            --i;
        }
    }
    cout << "Scores for each questions:" << endl;
    for (int i = 0; i < 15; i++)
        cout << "QUESTIONS " << i + 1 << ":" << score[i] << endl;
}
int main()
{
    string name;                 // changed name from char name[12] to string name
    cout << "Enter Your Name: "; // removed endl
    getline(cin, name);          // changed to match string
    string str1 = "Welome";      // removed str2
    str1 = str1 + " " + name;    // added space between name and welcome
    cout << str1 << endl;
    int choice;
    int *pointertochoice = &choice; // pointer added
    cout << "ENTER YOUR CHOICE" << endl;
    cout << "Press 1 for personality test" << endl;
    cout << "Press 2 for survey" << endl;
    cin >> *pointertochoice; // enter value in pointer that goes to choice
    switch (choice)
    {
    case 1:
        cout << "You have pressed 1 for Personality Test" << endl;
        PersonalityQuestions();
        break;
    case 2:
        cout << "You have pressed 2 for Survey" << endl;
        SurveyQuestions();
        break;
    default:
        cout << "INVALID CHOICE" << endl;
        return 0;
    }
    return 0;
}
